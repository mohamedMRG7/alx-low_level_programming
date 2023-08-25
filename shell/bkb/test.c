#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"
/**
 * setparams - Tokenize a command string into parameters
 * @params: Array to store command parameters
 * @command: Input command string
 */
void setparams(char **params, char *command)
{
	const char *delemter = " ";
	char *token;
	int i = 0;

	token = strtok(command, delemter);
	while (token != NULL)
	{
		params[i] = token;
		token = strtok(NULL, delemter);
		i++;
	}

	params[i] = NULL;
}
/**
 * executecommand - Execute a command in a new process
 * @execPath: Full path of the command executable
 * @params: Array of command parameters
 * @env: Array of environment variables
 * @appname: Name of the application
 * Return: Result value of the command execution
 */
int executecommand(char *execPath, char **params, char **env, char *appname)
{
	int pid;
	int resultvals;

	pid = fork();
	if (pid < 0)
	{
		resultvals = -1;
	}
	if (pid == 0)
	{
		if (execve(execPath, params, env) == -1)
		{
			perror(appname);
			resultvals = -1;
		}
		resultvals = 0;
	}
	else
	{
		wait(NULL);
		if (isatty(STDIN_FILENO))
			printf("($) ");
	}
	return (resultvals);
}
/**
 * init - Execute a command in a new process
 * @ac: Array of command parameters
 * @bufferSize: Array of environment variables
 * @resultvals: Name of the application
 * Return: Result value of the command execution
 */
void init(int *ac, size_t *bufferSize, int *resultvals)
{
	(void) ac;
	(void) bufferSize;
	(void) resultvals;
	bufferSize = 0;
	resultvals = 0;
}
/**
 * main - Entry point of the program
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 * @env: Array of environment variables
 * Return: Exit status of the program
 */
int main(int ac, char **av, char **env)
{
	char *line;
	size_t bufferSize;
	ssize_t bytesRead;
	char **params;
	char *execPath;
	int resultvals;

	init(&ac, &bufferSize, &resultvals);
	line = NULL;
	if (isatty(STDIN_FILENO))
		printf("($) ");
	while ((bytesRead = getline(&line, &bufferSize, stdin)) > -1)
	{
		if (bytesRead > 1 && line[bytesRead - 1] == '\n')
		{
			line[bytesRead - 1] = '\0';
			bytesRead--;
		}
		params = malloc(bytesRead);
		if (params == NULL)
		{
			resultvals = -1;
			break;
		}
		setparams(params, line);
		if (strcmp(params[0], "exit") == 0)
		{
			exit(params[1] == NULL ? 0 : atoi(params[1]));
		}
		execPath = getExecutiblePath(params[0], env);
		if (execPath == NULL)
		{
			perror(av[0]);
			resultvals = -1;
			break;
		}
		resultvals = executecommand(execPath, params, env, av[0]);
	}
	free(line);
	free(params);
	return (resultvals);
}

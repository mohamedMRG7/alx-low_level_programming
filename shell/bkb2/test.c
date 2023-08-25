#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void) {
    char *line = NULL;
    size_t len = 0;
    pid_t pid;
    while (1) {
        printf("#cisfun$ ");
        if (getline(&line, &len, stdin) == -1) {
            if (feof(stdin)) {
                printf("\n");
                break;
            }
            perror("getline");
            exit(EXIT_FAILURE);
        }

        
        line[strlen(line) - 1] = '\0';

        
        pid = fork();
        if (pid == 0) {
        
            char *args[] = {line, NULL};
            execve(line, args, NULL);
            perror(line);
            exit(EXIT_FAILURE);
        } else if (pid < 0) {
            perror("fork");
        } else {
            
            wait(NULL);
        }
    }

    free(line);
    return EXIT_SUCCESS;
}
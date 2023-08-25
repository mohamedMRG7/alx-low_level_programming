#ifndef DOG_H
#define DOG_H
char *getEnvironmentVariable(const char *name, char **environ);
char *getExecutiblePath(char *command, char **env);
#endif

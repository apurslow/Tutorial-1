#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAXSTR 255
#define ARGCNT 5


int main(int argc, char *argv[])
{
char cmd[MAXSTR];
char arg1[MAXSTR];
char arg2[MAXSTR];
char file[MAXSTR];

// Additional code goes here
char ** args = malloc( ARGCNT * sizeof(char*));
*(args + 0) = cmd;
*(args + 1) = arg1;
*(args + 2) = arg2;
*(args + 3) = file;
printf("cmd->");
fscanf(stdin, "%s", cmd);
printf("char %lu=%d\n",strlen(cmd),cmd[strlen(cmd)]);



int execvp(const char *file, char *const argv[]);

return 0;
}

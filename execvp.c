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
*(args + 4) = NULL;
printf("cmd->");
fscanf(stdin, "%s", cmd);
printf("arg1->");
fscanf(stdin, "%s", arg1);
printf("arg2->");
fscanf(stdin, "%s", arg2);
printf("file->");
fscanf(stdin, "%s", file);

printf("char %lu=%d\n",strlen(cmd),cmd[strlen(cmd)]);
for (int i=0;i<ARGCNT;i++) printf("i=%d args[i]=%s\n",i,*(args + i));


int status = execvp(args[0], args);
printf("STATUS CODE=%d\n",status);



return 0;
}

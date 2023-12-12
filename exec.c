#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
char * myarg;

printf("hello world \n");
printf("number of args=%d \n",argc);
for (int i=0;i<argc;i++)
{

printf("arg %d=%s\n",i,argv[i]);
}
myarg=argv[0];
printf("addr of myarg=%lu val of myarg=%s\n",myarg,myarg);
printf("The NULL char that terminates my string=%d\n", *(myarg+6));
printf("myarg char 0=%d %c\n",*(myarg+0),*(myarg+0));
printf("myarg char 1=%d %c\n",*(myarg+1),*(myarg+1));
printf("myarg char 2=%d %c\n",*(myarg+2),*(myarg+2));
printf("myarg char 3=%d %c\n",*(myarg+3),*(myarg+3));
printf("myarg char 4=%d %c\n",*(myarg+4),*(myarg+4));
printf("myarg char 5=%d %c\n",*(myarg+5),*(myarg+5));
printf("myarg char 6=%d %c\n",*(myarg+6),*(myarg+6));
return 0;
}
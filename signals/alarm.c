//SIGALRM-14 example
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int main()
{
printf("process executing..\n");
alarm(5);
printf("nothing..\n");
while(1);
}

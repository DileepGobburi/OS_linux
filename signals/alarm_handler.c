//setting alarm to enter in to isr
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void isr(int n)
{
printf("in isr body\n");
printf("sidno:%d\n",n);
printf("isr completed..\n");
//alarm(2);
}
int main()
{
signal(SIGALRM,isr);
printf("process executing..\n");
alarm(5);
printf("nothing..\n");
getchar();
//while(1);
}

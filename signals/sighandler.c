//signalhandler program
#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr function...\n");
printf("n=%d\n",n);
signal(n,SIG_DFL);
//signal(n,SIG_IGN);
}
int main()
{
printf("process executing..\n");
printf("pid:%d\n",getpid());
signal(SIGINT,isr);
while(1);
}

//sigaction function for reset the signal to original action
#include<stdio.h>
#include<signal.h>
void isr()
{
printf("in isr function...\n");
}
int main()
{
struct sigaction v;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=SA_RESETHAND;
sigaction(2,&v,0);
printf("signo 2 changed to isr ..\n");
while(1);
}

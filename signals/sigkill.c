//to kill process by using pid and signalnumber
#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
printf("process is sending signal to other process\n");
int signo,pid;
if(argc!=3)
{
printf("./a.out signo pid\n");
return 0;
}
signo=atoi(argv[1]);
pid=atoi(argv[2]);
if(kill(pid,signo)<0)
perror("kill");
printf("signai %d is sent to pid ;%d\n",signo,pid);
}

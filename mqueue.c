#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX 20
struct msgbuf{
long mtype;
char mtext[20];
};
main()
{ int id;
id=msgget(9,IPC_CREAT|0664);
struct msgbuf m;
m.mtype=1;
printf("write data\n");
fgets(m.mtext,MAX,stdin);
msgsnd(id,&m,sizeof(m),0);
printf("data is %s\n",m.mtext);
}

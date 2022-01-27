#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msgbuf{
long mtype;
char mtext[20];
};
main()
{ int id;
id=msgget(9,IPC_CREAT|0664);
struct msgbuf m;
printf("data received is :\n");
msgrcv(id,&m,sizeof(m),0,0);
printf(" %s\n",m.mtext);
//msgctl(msgid,IPC_RMID,NULL);
}

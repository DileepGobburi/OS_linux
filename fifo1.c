#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
int fd,ret;
char buf[20];
ret=mkfifo("p",0664);
printf("%d\n",ret);
if(ret<0)
{
perror("mkfifo");
}
fd=open("p",O_WRONLY);
if(fd<0)
{
perror("open");
return ;
}
while(1)
{
printf("enter the data\n");
scanf("%s",buf);
write(fd,buf,strlen(buf)+1);
}
}

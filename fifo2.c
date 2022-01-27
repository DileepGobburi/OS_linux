#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
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
fd=open("p",O_RDONLY);
if(fd<0)
{
perror("open");
return ;
}
while(1)
{
printf("the data in the file\n");
read(fd,buf,sizeof(buf));
printf("%s\n",buf);
}
}

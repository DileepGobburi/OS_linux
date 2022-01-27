#include<stdio.h>
#include<string.h>
#include<unistd.h>
///#include<errno.h>
//#include<fcntl.h>
int main()
{
int fd[2];
if(pipe(fd)<0)
	{
		perror("pipe");
		return 0;
	}
if(fork()==0)
{
char buf[20];
printf("enter the data\n");
scanf("%s",buf);
write(fd[1],buf,strlen(buf)+1);
}
else
{
char arr[20];
read(fd[0],arr,sizeof(arr));
printf("%s",arr);
}
}

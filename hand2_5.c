#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>  
int main(int argc, char const *argv[])
{
	int fd1,fd2;
	int n=50;
	char buf[70];
	if((fd1=open(argv[1],O_RDWR))==-1)
		printf("Error in open");
	if((fd2=open(argv[2],O_RDWR|O_CREAT|O_EXCL,0766))==-1)
		printf("Error in open");
	while((n=read(fd1,buf,20))>0)
		write(fd2,buf,n);
	//printf("%d",n);
	close(fd1);
	close(fd2);
	return 0;
} 
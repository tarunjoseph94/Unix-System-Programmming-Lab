#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>  
int main(int argc, char const *argv[])
{
	int fd;
	int n=50;
	char buf[70];
	if((link(argv[1],argv[2]))==-1)
		printf("Error in open");
	else
		unlink(argv[1]);
	return 0;
} 
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
    int fd = -1, readOk = -1;
    char buf[7] = {-1,};
    fd = open("file.txt",O_RDWR);
    if (fd == -1)
    {
	printf("FIleOpenErroR!");
	return -1;
    }
    else
    {
	readOk = read(fd,buf,sizeof(buf));
	printf("\n[%d]",readOk);
	printf("\n[%s]",buf);
    }
    lseek(fd,-9,SEEK_END);    
    readOk = read(fd,buf,sizeof(buf));
    printf("\n[%d]",readOk);
    printf("\n[%s]",buf);
    return 0;
}

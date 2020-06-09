#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
    int written = 0;
    int fp = -1; 
    char buff[10] = {"what the?"};
    fp = open("file.txt", O_RDWR);
    if (fp == -1)
    {
	puts("File open ERo.. ang*");
	return -1;
    }
    else
    { 
	written = write(fp,buff,1);
	written = write(fp,buff,2);
	written = write(fp,buff,4);
	written = write(fp,buff,8);
    }
    return 0;
}

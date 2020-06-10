#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
    int fp = -1;
    fp = open("file.txt", O_RDWR | O_APPEND);
    if (fp == -1)
    {
	printf("File Open Error!");
	return -1;
    }
    write(fp,"Add: haha!\n",10);
    write(fp,"\n",1);
    write(fp,"Add: call?",10);
    close(fp);
    return 0;
}

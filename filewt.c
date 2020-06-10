#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
    int fp = -1, readok = 0;
    char buff[100] = {1,};   
    fp = open("file.txt", O_RDWR | O_CREAT,0644);
    if (fp == -1)
    {
	puts("File open ERRor.");
	return -1;
    }
    else
    { 
	printf("%zd\n",write(fp,"F",1));
	printf("%zd\n",write(fp,"LAC",3));
	printf("%zd\n",write(fp,"\nAA",2));
	printf("%zd\n",write(fp,"End!",4));
    }
    readok = read(fp,buff,sizeof(buff));
    printf("\n=%d=",readok);
    printf("\n\n[%s]",buff);
    close(fp);
    return 0;
}

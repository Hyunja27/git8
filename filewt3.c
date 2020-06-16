#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
    int fp = -1, i = 0;
    char buff[30] = {1,};
    char buff2[30];
    buff[29] = '\n';
    fp = open("file2.txt", O_RDWR | O_CREAT,0644);
    if (fp == -1)
    {
	puts("File Open Error!");
	return -1;
    }
    printf("\n[%lu]\n",sizeof(buff2));
     while (strlen(buff) > 0 ) 
    {
	if (strcmp(buff,"exit") == 0)
	    break;
	scanf("%s",buff);
	write(fp,buff,(int)strlen(buff));
    }
    lseek(fp,0,SEEK_SET);
    read(fp,buff2,30);
    lseek(fp,0,SEEK_END);
    write(fp,"\n\n",2);
    write(fp,buff2,sizeof(buff2));
    close(fp);
    return 0;
}

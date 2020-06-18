#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
    int fd = -1;
    char arr[30] = {-1,};
    arr[29] = '\0';
    fd = open("File2.txt",O_RDWR | O_CREAT, 0664);
    if (fd == -1)   
    {
	puts("File Open Error!");
	return -1;
    }
    while (1)
    {
	scanf("%s",arr);
	if (strcmp(arr,"exit") == 0)
	    break;
	write(1,arr,strlen(arr)); 
    }
    close(fd);
    return 0;
}

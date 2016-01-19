#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
    int filedesc = open("testfile.txt", O_WRONLY);
    if(filedesc < 0)
    {
    printf("open failed");
        return 1;
    }
    if(write(filedesc,"This will be output to testfile.txt\n", 36) != 36)
    {
        printf("There was an error writing to testfile.txt\n");    
        return 1;
    }
 
    return 0;
}

#include<stdio.h>
int main()
{
int bit,z=0;
while(1)
{
printf("enter bit to set ?");
scanf("%d",&bit);
z = z | (1 << bit);
printf("z=%d \n",z);
z=0;
}
return 0;
}


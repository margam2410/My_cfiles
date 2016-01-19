#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0,j=0;
int *a;
printf("enter the no. of elementss required to print \n");
scanf("%d",&i);
a=(int*)malloc(sizeof(int) *i);
for(j=0;j<i;j++)
{
  printf("[%d]",a[j]);
}
for(j=0;j<i;j++)
{
  a[j]=j*2;
}
for(j=0;j<i;j++)
{
printf("[%d]",a[j]);
}
}



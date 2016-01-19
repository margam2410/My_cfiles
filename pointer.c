#include<stdio.h>
int main()
{
//int c=100,d=200;
int *a;
int *b;
char *h;
//a=&c;
//b=&d;
//printf("%d",*a);
//printf("%d",*b);
printf("%d %u",a,a);
printf("%d %u",b,b);
printf("sizeof a=%d",sizeof(a));
printf("sizeof h=%d",sizeof(h));
return 0;
}


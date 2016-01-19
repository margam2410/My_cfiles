#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
int c;
printf("enter string a \n");
scanf("%s",&a);
printf("enter string b \n");
scanf("%s",&b);
c=strncmp(a,b,);
if(c==0)
printf(" same \n");
else
printf(" diff \n");
return 0;
}



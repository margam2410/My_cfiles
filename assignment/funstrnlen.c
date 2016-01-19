#include<stdio.h>
int string_length(char []);
int main()
{
char s[2];
int length;
top:
printf("input a string \n");
scanf("%s",s);
length=string_length(s);
if(length>3)
{
printf("please enter below 3 characters \n");
goto top;
}
else
{
length=string_length(s);
printf("length of \"%s\" = %d\n",s,length);
}
return 0;
}
int string_length(char s[])
{
int c=0;
while (s[c] != '\0')
c++;
return c;
}


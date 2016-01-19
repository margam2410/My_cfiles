#include <stdio.h>
#include <string.h>
 
int main ()
{
  char *str1 = "ab";
  char *str2 = "a";
  int ret;
 
  ret = strncmp(str1, str2, 1);
 
  if(ret > 0)
  {
    printf("str1 is longer \n");
  }
  else if(ret < 0)
  {
    printf("str2 is longer\n");
  }
  else
  {
    printf("The two strings are equal\n");
  }
 
  return(0);
}

#include <stdio.h>
#include <string.h>
 
int main ()
{
  char *str2 = "apple";
  char *str1 = "orange";
  int ret;
 
  ret = strncmp(str2, str1, 4);
 
  if(ret > 0)
  {
    printf("str1 is longer");
  }
  else if(ret < 0)
  {
    printf("str2 is longer");
  }
  else
  {
    printf("The two strings are equal");
  }
 
  return(0);
}

#include<stdio.h>
#include <stddef.h>
//
//int strncmp_t(const char* s1, const char* s2, size_t n)
//{
//    while(n--)
 //       if(*s1++!=*s2++) {
//            printf ("str1 %d = str2 =%d \n", *(unsigned char*)(s1 - 1), *(unsigned char*)(s2 - 1));
//            return *(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1);
//	}
  //  return 0;
//

int main ()
{
  char str1[10] = "mahi";
  char str2[10] = "amih";
  int ret;
 
  ret = strncmp(str1, str2, 4);
 
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

#include<stdio.h>
#include<unistd.h>
int main () {

  int i = 0;
  int *p;
  printf("getpid = %d\n",getpid());
  printf("i++ = %d\n", i++);
  int ret = fork();
  printf("Hello\n");
  printf("i++ = %d\n", i++);
  printf("getpid = %d\n",getpid());
  printf("ret = %d\n",ret);
  wait(p);
  return 0;
}   






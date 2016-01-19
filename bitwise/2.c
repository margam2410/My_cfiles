#include<stdio.h>
int clear_bit(int num, int pos)
{
	int temp = 1;
 	temp = temp<<pos;
num = num ^ temp;
return num;
}


#include<stdio.h>
#include"Endians.h"
int main()
{
  unsigned int x = 0x76543210;
  char *c =(char*)&x;
  printf("*c is: 0x%x\n", *c);
  endians(c);
}


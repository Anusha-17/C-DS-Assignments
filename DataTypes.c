#include<stdio.h>
void main()
{
	int a=10;
	signed int b=20;
	unsigned int c=6;
	unsigned long int d=23;
	char ch='A';
	signed char ch1='N';
	unsigned char ch2='U';
	float f=10.17;
	double d1=12.34;
	printf("Integer datatype : %d\n",sizeof(a));
	printf("Signed int datatype : %d\n",sizeof(b));
	printf("Unsigned int datatype : %d\n",sizeof(c));
	printf("Unsigned long int datatype : %d\n",sizeof(d));
	printf("Char datatype : %d\n",sizeof(ch));
	printf("Signed Char datatype : %d\n",sizeof(ch1));
	printf("Unsigned Char datatype : %d\n",sizeof(ch2));
	printf("Float datatype : %d\n",sizeof(f));
	printf("Double datatype : %d",sizeof(d1));
}

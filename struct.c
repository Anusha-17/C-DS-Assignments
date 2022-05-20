#include<stdio.h>
struct abc
{
	int *a; //4 bytes
	int b; // 4 bytes
	char c; // 4 byte	
};
void main()
{
	
    struct abc var[2];
	printf("%p %p \n",&var[0].a,&var[1].a);
	struct abc a;
	printf("Size of structure: %d\n",sizeof(a));
	int *ptr;
	char *ptr1;
	float *ptr2;
	double *ptr3;
	printf("Size of integer pointer : %d\n",sizeof(ptr));
	printf("Size of integer pointer : %d\n",sizeof(ptr1));
	printf("Size of integer pointer : %d\n",sizeof(ptr2));
	printf("Size of integer pointer : %d\n",sizeof(ptr3));
	printf("\n");
	printf("Size of integer pointer : %d\n",sizeof(*ptr));
	printf("Size of integer pointer : %d\n",sizeof(*ptr1));
	printf("Size of integer pointer : %d\n",sizeof(*ptr2));
	printf("Size of integer pointer : %d\n",sizeof(*ptr3));
	struct abc var1;
	printf("%p %p %p",&var1.a,&var1.b,&var1.c);
}

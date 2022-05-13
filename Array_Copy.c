#include<stdio.h>
void copy(int *src,int *dest,int n);
int main()
{
	int src[50],dest[50];
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(src+i));
	}
	copy(src,dest,n);
	printf("The copied elements of array are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(src+i));
	}
  	printf("\n");
  	return 0;
}
void copy(int *src,int *dest,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(dest+i)=*(src+i);
	}
}

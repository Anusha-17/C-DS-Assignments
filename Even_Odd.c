#include<stdio.h>
void main()
{
	int min,max,i;
	printf("Enter min and max values\n");
	scanf("%d %d",&min,&max);
	printf("\nEven numbers between min and max are:\n");
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
	printf("\nOdd numbers between min and max are:\n");
	for(i=min;i<=max;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}

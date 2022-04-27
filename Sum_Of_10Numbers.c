#include<stdio.h>
void main()
{
	int num, sum=0;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("Enter number:");
		scanf("%d",&num);
		if(num<0) //negative numbers are skipped
		continue;
		sum=sum+num;
	}
	printf("Sum=%d",sum);
}

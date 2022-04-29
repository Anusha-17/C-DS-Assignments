#include<stdio.h>
void selectionsort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
void main()
{
	int a[50], n, i, j, temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selectionsort(a,n);
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

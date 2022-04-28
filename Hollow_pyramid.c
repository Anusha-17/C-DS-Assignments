#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows;
    printf("Enter the number of rows to Pyramid: ");
    scanf("%d",&rows);//get input from user for rows
    int i,j,k;
    i=1;
    while(i<=rows)
	{
        j=i;
        while(j<rows)
		{
        printf(" ");//print initial space
        j++;
    }
    k=1;
    while(k<2*i)
   {
        if(k==1)
        printf("/");//print /
        if(k==2*i-1)
        printf("%c",92);//print \
	    else
        printf(" ");//print space
        k++;
    }
    i++;
    printf("\n");
    }
    i=0;
    while(i<rows)
    {
	printf("--");
	i++;
    }
}

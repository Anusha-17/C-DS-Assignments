#include<stdio.h>
void main()
{
	double a,b;
	char ch;
	printf("Enter your choice:\n");
	printf("a.Addition\ns.Subtraction\n");
	scanf("%c",&ch);
	printf("Enter 2 double numbers\n");
	scanf("%lf %lf",&a,&b);
	switch(ch)
	{
		case 'a':printf("Addition = %lf\n",(a+b));
		         break;
		case 's':printf("Subtraction = %lf\n",(a-b));
		         break; 
		default: printf("No action");
		         break;       
	}
}

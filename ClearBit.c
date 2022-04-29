#include<stdio.h>
#include"clearbit.h"
int main()
{
    int num,n,newNum;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d",&n);
    clearbit(n,num);
    return 0;
}

#include<stdio.h>
#include"setbit.h"
int main()
{
    int num, n;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth bit to set (0-31): "); //Input bit position you want to set 
    scanf("%d",&n);
    setbit(n,num);
    return 0;
}

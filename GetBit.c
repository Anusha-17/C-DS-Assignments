#include<stdio.h>
#include"getbit.h"
int main()
{
    int num,n,bitStatus;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth bit to check (0-31): ");
    scanf("%d",&n);
    getbit(n,num);
    return 0;
}

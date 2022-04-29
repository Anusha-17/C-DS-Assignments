#include<stdio.h>
#include"togglebit.h"
int main()
{
    int num,n;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d",&n);
    togglebit(n,num);
    return 0;
}

#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, p;
    int temp;
    for(p = 1; p < n; p++)
    {
        temp = a[p];
        for(j = p; j > 0 && a[j-1] > temp; j--)
            a[j] = a[j-1];
        a[j] = temp;
    }
} 
void main()
{
    int i, n, a[10];
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
}

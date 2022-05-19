#include<stdio.h>
void main()
{
   int a[5];
   int *p,i;
   printf("Enter 5 lements: ");
   for(i=0; i<5; i++)
      scanf ("%d", &a[i]);
   p = &a[0];
   printf("Elements of the array are: ");
   for(i=0; i<5; i++)
      printf("%d ", *(p+i));
}

/* P = &a[0] = 1000
P+1 = &a[1] = 1004
P+2 = &a[2] = 1008
P+3 = &a[3] = 1012
P+4 = &a[4] = 1016 */

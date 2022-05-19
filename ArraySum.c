// Program to calculate the sum of array elements by passing to a function 
#include <stdio.h>
float calculateSum(float num[]);
int main()
{
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
  result = calculateSum(num); // num array is passed to calculateSum()
  printf("Result = %.2f", result);
  return 0;
}
float calculateSum(float num[])
{
  float sum = 0.0;
  int i;
  for(i = 0; i < 6; i++)
  {
    sum += num[i]; //sum=sum+num[i]
  }
  return sum;
}

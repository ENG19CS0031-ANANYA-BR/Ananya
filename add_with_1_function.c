//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  float a,b,sum;
  printf("enter the numbers to be added");
  scanf("%f%f",&a,&b);
  sum=a+b;
  printf("sum of %f and %f is %f",a,b,sum);
  return 0;
}

//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
int n,count,num,sum=0;
printf("enter the total number of numbers\n");
scanf("%d",&n);
printf("enter the numbers");
for(count=1;count<=n;count++)
{
scanf("%d",&num);
sum=sum+num;
}
printf("sum of %d numbers is %d",n,sum);
return 0;
}

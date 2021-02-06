//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
int input()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    return n;
}
int sum( int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}
int output(int a,int b,int sum)
{
    printf("sum of %d and %d is %d",a,b,sum);
    return 0;
}
int main()
{
    int d,e,f;
    d=input();
    e=input();
    f=sum(d,e);
    output(d,e,f);
    return 0;
}


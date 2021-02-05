//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
float h,d,b,vol;
printf("enter the height ,depth,breadth respectively");
scanf("%f%f%f",&h,&d,&b);
vol=(0.333333)*((h*b*d)+(d/b));
printf("volume of tromboloid of given %f , %f, %f is %f ",h,d,b,vol);
return 0;
}



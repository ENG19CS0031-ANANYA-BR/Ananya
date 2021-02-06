//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{ 
    float n;
    printf("enter the measurements\n");
    scanf("%f",&n);
    return n;
}
float vol( float h,float b,float d)
{
   float vol;
   vol=1.0/3.0((h*b*d)+(b/d));
   return 0;
}
int output(float vol)
{
   printf("volume of the tromboloid is %f",vol);
   return vol;
}
int main()
{
   float a,b,c,v;
   a=input();
   b=input();
   c=input();
   v=vol(a,b,c);
   output(v);
   return 0;
}

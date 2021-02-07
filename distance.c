//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float dist( float x1,float x2,float y1,float y2)
{
    float d;
    d= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return d;
}
float input()
{
    float n;
    printf("enter the coordinates\n");
    scanf("%f",&n);
    return n;
}
void output(float a)
{
    printf("the distance is %f",a);
}
int main()
{
    float a1,a2,b1,b2,d;
    a1=input();
    a2=input();
    b1=input();
    b2=input();
    d=dist(a1,a2,b1,b2);
    output(d);
    return 0;
}

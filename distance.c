//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float three_d( float x1,float x2,float y1,float y2,float z1,float z2)
{
    float d;
    d= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
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
    float a1,a2,b1,b2,c1,c2,d1,d2;
    a1=input();
    a2=input();
    b1=input();
    b2=input();
    c1=input();
    c2=input();
    d2=three_d(a1,a2,b1,b2,c1,c2);
    output(d1);
    output(d2);
    return 0;
}

//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Point
 {
   float x, y;
};
float Distance(struct Point a, struct Point b)
{
    float distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}

struct Point input()
{
 struct Point a;
 printf("enter x coordinates");
 scanf("%f",&a.x);
 printf("enter y coordinates");
 scanf("%f",&a.y);
 return a;
}
void output(float dist)
{
printf("distance=%f",dist);
}
float main()
{
    struct Point a,b;
    float z;
    a=input();
    b=input();
    z=Distance(a,b);
    output(z);
    return 0;
}





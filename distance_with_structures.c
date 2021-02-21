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
int main()
{
    struct Point a, b;
    printf("Enter coordinate of point a: ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%f %f", &b.x, &b.y);
    printf("Distance between a and b: %f\n",Distance(a, b));
    return 0;
}



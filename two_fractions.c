//WAP to find the sum of two fractions.
#include<stdio.h>
struct frac
{
    int  numerator;
    int  denominator;
};

struct frac sum(struct frac a,struct frac b)
{
    struct frac res;
    res.denominator=a.denominator*b.denominator;
    res.numerator=(a.numerator*b.denominator)+(b.numerator*a.denominator);
    int gcd=hcf(res.numerator,res.denominator);
    res.denominator=(res.denominator)/gcd;
    res.numerator=(res.numerator)/gcd;
    return res;
}

int hcf(int a,int b)
{
    int gcd=1;
    int i=1;
do
{
    if(a%i==0&&b%i==0)
    gcd=i;
    i++;
} while (i<=a&&i<=b);
    return gcd;
}

struct frac input()
{
    struct frac a;
    printf("Enter the numerator\n");
    scanf("%d",&a.numerator);
    printf("Enter the denominator\n");
    scanf("%d",&a.denominator);
    return a;
}


void output(struct frac a,struct frac b,struct frac c)
{
    printf("The sum of %d/%d and %d/%d is %d/%d",a.numerator,a.denominator,b.numerator,b.denominator,c.numerator,c.denominator);
}


int main()
{
    struct frac a,b,c;
    a=input();
    b=input();
    c=sum(a,b);
    output(a,b,c);
    return 0;
}

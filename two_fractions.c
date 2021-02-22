//WAP to find the sum of two fractions.
#include<stdio.h>
struct fract
{
int  num;
int  deno;
};
typedef struct fract fraction;
fraction input()
{
fraction a;
printf("Enter the numerator\n");
scanf("%d",&a.num);
printf("Enter the denominator\n");
scanf("%d",&a.deno);
return a;
}
fraction sum(fraction a,fraction b)
{
fraction res;
res.deno=a.deno*b.deno;
res.num=(a.num*b.deno)+(b.num*a.deno);
int gcd=g(res.num,res.deno);
res.deno=(res.deno)/gcd;
res.num=(res.num)/gcd;
return res;
}
int g(int a,int b)
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
void output(fraction a,fraction b,fraction c)
{
printf("The sum of %d/%d and %d/%d is %d/%d",a.num,a.deno,b.num,b.deno,c.num,c.deno);
}
int main()
{
fraction a,b,c;
a=input();
b=input();
c=sum(a,b);
output(a,b,c);
return 0;
}

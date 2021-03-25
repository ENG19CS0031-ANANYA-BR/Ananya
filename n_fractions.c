//WAP to find the sum of n fractions.
#include<stdio.h>
struct frac
{
    int num;
    int deno;
};
typedef struct frac fraction;
fraction input()
{
    fraction f;
    printf("enter the numerator:\n");
    scanf("%d",&f.num);
    printf("enter the denominator:\n");
    scanf("%d",&f.deno);
    return f;
}
void input_n(fraction f1[],int *n)
{
    int i;
    printf("enter number of fractions:\n");
    scanf("%d",n);
    printf("enter the values:\n");
    for(i=0;i<*n;i++)
    {
      f1[i]=input();
    }
}
fraction sum(fraction f1,fraction f2)
{
    fraction res;
    int gcd;
    res.deno=f1.deno*f2.deno;
    res.num=(f1.num*f2.deno)+(f2.num*f1.deno);
    gcd=hcf(res.num,res.deno);
    res.num=res.num/gcd;
    res.deno=res.deno/gcd;
    return res;
}


fraction sum_n( fraction f1[] ,int n)
{
    fraction res;
    int i;
    res.deno=1;
    res.num=0;
    for(i=0;i<n;i++)
    {
        res=sum(f1[i],res);
    }
    return res;
}

int hcf(int a,int b)
{
    int i,tmp,hcf=0;
    if(a<b)
    {
       int temp=a;
       a=b;
       b=temp;
    }
    if(a%b==0)
    {
       return b;
    }
    for(i=b/2;i>=2;i--)
    {
        if(a%i==0&&b%i==0)
        return i;
    }
    return hcf;
}
void output(fraction f1[], fraction res,int n)
{
    printf("sum of ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d/%d+",f1[i].num,f1[i].deno);
    }
    printf("%d/%d=%d/%d",f1[n-1].num,f1[n-1].deno,res.num,res.deno);
}
int main()
{
   int n;
   fraction f1[100],res;
   input_n(f1,&n);
   res=sum_n(f1,n);
   output(f1,res,n);
   return 0;
}


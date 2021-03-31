#include<stdio.h>
int value()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    return n;
}
void input(int a[],int *n)
{
   
    printf("enter the number of numbers");
    scanf("%d",n);
    for(int i=0;i<*n;i++)
      {
       a[i]=value();
      }
}
int clac(int a[],int n)
{
 int sum=0;
 for(int i=0;i<n;i++)
 {
     sum=sum+a[i];
 }
return sum;
}
void output(int sum,int a[],int n)
{
    printf("sum of ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d is %d",a[n-1],sum);
}
int main()
{
  int a[200], n;
  input(a,&n);
  int res=clac(a,n);
  output(res,a,n);
  return 0;
}

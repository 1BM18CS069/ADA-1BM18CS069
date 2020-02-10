#include<stdio.h>
int gcd(int m,int n)
{
 int result=0;
int p;
 if(m==0 || n==0)
 {
  return result;
 }
 else
  {
   for(p=1;p<=n && p<=m;p++)
    {
     if(m%p==0 && n%p==0)
     {
       result=p;
      }
     }
      return result;
   }
}

int main()
{
 int m,n,result;
 printf("Enter m,n \n");
 scanf("%d%d",&m,&n);
 result=gcd(m,n);
 printf("Gcd of %d and %d is %d",m,n,result);
 return 0;
}

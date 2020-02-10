#include<stdio.h>
int min(int a,int b)
{
 if(a<b)
  return a;
 else
  return b;
}
int gcd(int m,int n)
{
 int small;
  small=min(m,n);
  while(1)
  {
   if((m%small==0) && (n%small==0))
      return small;
     small=small-1;
   }
  return 0;
}

int main()
{
 int m,n,result;
 printf("Enter m,n \n");
 scanf("%d%d",&m,&n);
 result=gcd(m,n);
 printf("Gcd of no is %d",result);
 return 0;
}

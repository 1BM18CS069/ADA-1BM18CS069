#include<stdio.h>
int gcd(int m,int n)
{
 while(m!=n)
 {
  if(m>n)
  m=m-n;
  else
  n=n-m;
 }
 return m;
}

int main()
{
 int m,n;
 printf("Enter m,n \n");
 scanf("%d%d",&m,&n);
 m=gcd(m,n);
 printf("Gcd of two no is %d",m);
 return 0;
}

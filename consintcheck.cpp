#include<iostream>
using namespace std;
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
 cout<<"Enter m,n"<<endl;
 cin>>m>>n;
 result=gcd(m,n);
 cout<<"Gcd of no is "<<result<<endl;
 return 0;
}

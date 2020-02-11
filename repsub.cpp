#include<iostream>
using namespace std;
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
 cout<<"Enter m,n"<<endl;
 cin>>m>>n;
 m=gcd(m,n);
 cout<<"Gcd of two no is "<<m<<endl;
 return 0;
}

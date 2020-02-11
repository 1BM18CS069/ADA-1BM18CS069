#include<iostream>
using namespace std;
int gcd(int m,int n)
{
 int rem;
 while(n!=0)
 {
  rem=m%n;
  m=n;
  n=rem;
 }
 return m;
}

int main()
{
 int m,n;
 cout<<"Enter m,n"<<endl;
 cin>>m>>n;
 m=gcd(m,n);
 cout<<"Gcd is "<<m<<endl;
 return 0;
}

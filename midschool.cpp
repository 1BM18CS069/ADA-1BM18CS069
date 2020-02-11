#include<iostream>
using namespace std;
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
 cout<<"Enter m,n "<<endl;
 cin>>m>>n;
 result=gcd(m,n);
 cout<<"Gcd of "<<m<<" and"<< n<<" is "<<result<<endl;
 return 0;
}

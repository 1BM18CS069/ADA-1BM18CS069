#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dest,char aux)
{
 if(n==1)
 {
  cout<<"\n Move disk 1 from rod"<<src<<" to rod "<<dest<<endl;
  return;
 }
 towerofhanoi(n-1,src,aux,dest);
 cout<<"\n Move disk"<<n<<" from rod"<<src<<" to rod"<<dest<<endl;
 towerofhanoi(n-1,aux,dest,src);
} 

int main()
{
 int num;
 cout<<"Enter n "<<endl;
 cin>>num;
 towerofhanoi(num,'A','C','B');
 return 0;
 }

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
 int i,key,j;
 for(i=1;i<n;i++)
 {
  key=arr[i];
  j=i-1;
 while(j>=0 && arr[j]>key)
  { 
    arr[j+1]=arr[j];
     j=j-1;
   }
  arr[j+1]=key;
 }
}

void printarr(int arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
}

int main()
{
 int n; 

cout<<"enter size of array"<<endl;
 cin>>n;
 int a[n];
cout<<"enter elements"<<endl;
 for(int i=0;i<n;i++) 
 cin>>a[i];

insertion_sort(a,n);
printarr(a,n);
return 0;
}

 


  

#include<iostream>

#include<chrono>
using namespace std::chrono;
using namespace std;
  
 
int recSearch(int arr[], int l,  
              int r, int x) 
{ 
    if (r < l) 
        return -1; 
    if (arr[l] == x) 
        return l; 
    if (arr[r] == x) 
        return r; 
    return recSearch(arr, l + 1,  
                          r - 1, x); 
} 

int main()
{
	int key,n;
	cout<<"Enter the array size and key"<<endl;
	cin>>n>>key;
	int arr[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	auto start = high_resolution_clock::now(); 
	
	 int index = recSearch(arr, 0, n - 1, key); 
   auto stop = high_resolution_clock::now(); 
    if (index != -1) 
    cout << "Element " << key  
         << " is present at index "
         << (index+1); 
    else
        cout << "Element" << key  
             << " is not present" ; 
    return 0; 
	auto duration = duration_cast<microseconds>(stop - start); 
	cout << "Time taken : "<< duration.count() << " microseconds" << endl;
	return 0;
}

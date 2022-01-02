#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
// 	  while(d--)
// 	 { int temp=arr[0];
// 	     for(int i=0;i<n;i++)
// 	      arr[i]=arr[i+1];
// 	       arr[n-1]=temp;
// 	 }
vector <int> v;
for(int i=d;i<n;i++)
v.push_back(arr[i]);
for(int i=0;i<d;i++)
v.push_back(arr[i]);
for(int i=0;i<n;i++)
cout<<v[i]<<" ";
cout<<endl;
	}
	return 0;
}

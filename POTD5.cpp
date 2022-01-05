#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int greatest=a[0];
	    for(int i=1;i<n;i++)
	    greatest=__gcd(greatest,a[i]);
	    cout<<greatest<<endl;
	    
	}
	return 0;
}

// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
   int i=0;
    while(i<size)
    {
        int s=i+1,e=size-1,mid=s+(e-s)/2;
         while(s<=e)
         {   
             if(abs(arr[mid]-arr[i])==n)  return true; 
             else if(abs(arr[mid]-arr[i])<n)   s=mid+1;
                  else e=mid-1;
         mid=s+(e-s)/2;
         }
         i++;
    }
    return false;
}
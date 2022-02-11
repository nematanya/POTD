// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
        int x= A.length(),y= B.length();
        if(x!=y) return -1;
        int c[256]={0};
        for(int i=0;i<x;i++)
        c[A[i]]++;
        for(int i=0;i<x;i++)
        c[B[i]]--;
        for(int i=0;i<256;i++)
        if(c[i])
        return -1;
        int res=0;
        while(x>=0&&y>=0){
        if(A[x]==B[y])x--,y--;
        else res++,x--;
    }
    return res;
        
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
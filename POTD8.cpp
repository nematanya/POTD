#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,m,unique=0,distict=0;
        cin>>n>>m;
    vector<int> modd(m,0);
        for(int i =0;i<n;i++)
        { int a;
           cin>>a;
          modd[a%m]++;
        }
        for(int j=0;j<m;j++)
        {
            if(modd[j]==1)
                unique++;
            if(modd[j]>0)
                distict++;
        }
        cout<<distict<<endl<<unique<<endl;
        
    }
    return 0;
}

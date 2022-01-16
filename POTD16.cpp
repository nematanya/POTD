#include <bits/stdc++.h>
using namespace std;
bool is21(int n)
{
    int t=n;
    vector<int> v;
    while(t>0)
    {
        v.push_back(t%10);
        t=t/10;
    }
   for(int i=v.size()-1;i>=0;i--)
   {
	   if(v[i]==2 and v[i-1]==1)
         return 1;
   }
   return 0;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
		if (n % 21 == 0)
		{
        cout<<"The streak is broken!"<<endl;
		continue;
	    }
       if(is21(n))
	    cout<<"The streak is broken!"<<endl;
       else
        cout<<"The streak lives still in our heart!"<<endl;
    }
    return 0;
}
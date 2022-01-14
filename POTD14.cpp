class Solution {
public:
    int mySqrt(int x) {
        
        long long s=0,e=x,m=s+(e-s)/2;
        while(s<=e)
        {
            long long int res=m*m;
            if(res==x)return m;
            if(res>x)e=m-1;
            else s=m+1;
    m=s+(e-s)/2;
        }
        return m-1;
    }
};
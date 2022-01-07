class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
        long long digit=0;
        int n=x;
        while(n>0)
        {
            int rem=n%10;
            digit= 10*digit + rem;
            n=n/10;
        }
        if(digit==x)
            return true;
        else 
            return false;
        }
    }
};
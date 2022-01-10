class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=2,n=s.length(),count=0;
        
        while(j<n)
        {
         if(s[i]!=s[i+1]&&s[i+1]!=s[j]&&s[j]!=s[i])
             count++;
            i++;
            j++;
        }
        return count;
    }
};
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size(),flag=0;
        char ans;
       for(int i=0;i<n;i++)
       {
           if(letters[i]>target)
           {
         ans=letters[i];
               flag=1;
               break;
           }
       } 
        if(flag==0)
        ans=letters[0];
   return ans;
    }
};
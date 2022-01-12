class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> t;
      
            for(int i=0;i<s.length();i++)
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
                 t.push_back(s[i]);
                    else if(s[i]>='A'&&s[i]<='Z')
                        t.push_back(tolower(s[i]));
                else 
                    continue;
            }
          if (t.size()==0)
            return true;
          int i=0,j=t.size()-1,flag=0;
        while(i<=j)
        {
            if(t[i]!=t[j])
            {flag=1;
            break;}
            i++;
            j--;
        }
        if(flag)
            return false;
            else
                return true;
    }
};
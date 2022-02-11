class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        char arr[123]={0};
        for(int i=0;i<chars.length();i++)
        arr[chars[i]]++;
        for(auto ch: words)
        {
            char arr1[123]={0};
            bool flag=1;
            for(auto j:ch)
            {
                if(++arr1[j]>arr[j])
                    flag=0;
            }
            if(flag)
                sum+=ch.length();
        }
        return sum;
    }
};
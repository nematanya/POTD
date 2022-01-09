class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         vector<int> v;
        int n=numbers.size(),i=0,j=n-1;
        while(i<j)
            {  
             int sum= numbers[i]+numbers[j];
                if(sum==target)
                {  v.push_back(i+1);
                   v.push_back(j+1);
                 break;
                }
            else if(sum<target)
                i++;
                  else j--;}
        return v;
    }
};
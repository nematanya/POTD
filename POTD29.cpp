class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector <int> psum;
        int n=nums.size(),lsum=0,rsum=0;
      
       for(int i=0,j=n-1;i<n;i++,j--)
       { rsum+=nums[i]; 
          lsum+=nums[i];
        psum.push_back(lsum);
        
    }
        for(int i=0;i<n;i++)
        { rsum=rsum-nums[i];
             if(rsum==psum[i]-nums[i])
                return i;
            }
        return -1;
    }
};
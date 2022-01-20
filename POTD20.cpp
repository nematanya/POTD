class Solution {
public:
    int countbit(int n)
    {
        int count=0;
        while(n)
        {
            n&=(n-1);
            count++;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
    vector<pair<int,int>> v;
    for(int i=0;i<arr.size();i++)
            v.push_back({countbit(arr[i]),arr[i]});
    sort(v.begin(),v.end());
    arr.clear();
    for(auto t: v){
        arr.push_back(t.second);
    }
    return arr;
    }
};
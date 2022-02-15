class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map <string,vector<string>> v1;
      
        for(auto i:strs)
        {
        string s=i;
            sort(s.begin(),s.end());
            v1[s].push_back(i);
        }
        for(auto i:v1)
            v.push_back(i.second);
        return v;            
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto i:strs){
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
         vector<vector<string>>res;
         for(auto x:mp){
            res.push_back(x.second);
         }
         return res;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<string , vector<string> >mp;
        for(int i=0;i<str.size();i++){
            string x = str[i];
            sort(x.begin(),x.end());
              mp[x].push_back(str[i]);
        }
          vector<vector<string>> ans;
        for(auto tr : mp){
              ans.push_back(tr.second);

        }
          return ans;
    }
};

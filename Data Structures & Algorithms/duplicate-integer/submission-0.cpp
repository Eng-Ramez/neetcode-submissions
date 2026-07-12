class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int ,int >mp;
        for(auto i:nums){
            mp[i]++;
        }  
        for(auto &it:mp){
            if(it.second>=2){
                return true;
            }
        }
        return false;
    }
};

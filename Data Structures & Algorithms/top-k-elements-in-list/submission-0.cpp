class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
       unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto i:mp){
            q.push({i.second,i.first});
        }
         vector<int> ans;
         for(int i=0;i<k;i++){
            if(!q.empty()){
                ans.push_back(q.top().second);
                q.pop();
            }
         }
         return ans;
    }  
};

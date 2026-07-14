class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int, int, greater<int>> mp;
      for(int i=0;i<nums.size();i++){
        int x=nums[i];
        mp[x]++;
      }

    vector<pair<int , int>>v;
    for(auto it:mp ){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());// تنازليا 

    vector<int>res;
    for(int i=0;i<k;i++){
        res.push_back(v[i].second);
    }
 return res;
}
};
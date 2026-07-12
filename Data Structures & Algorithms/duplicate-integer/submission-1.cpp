class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int s = nums.size();
        for(int i=0;i<s;i++){
            int res = count(nums.begin(),nums.end(), nums[i]);
            if(res>=2){
                return true;
            }
        }
        return false;
    }
};
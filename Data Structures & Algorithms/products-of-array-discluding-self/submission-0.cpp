class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p =1;
        int c=0;
        
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
                continue;
            }
            p*=nums[i];

         }
         int n=nums.size();
         vector<int> ans;
         if (c>=2)
         {
           vector<int> res(n,0);
           return res;

         }else if (c==1)
         {
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                  ans.push_back(0);
                }else{

                    ans.push_back(p);
                }
            }
            return ans;

         }else {
            for(int i=0;i<n;i++){
                int x=p/nums[i];
                ans.push_back(x);
            }
            return ans;
         }

        
    }
};

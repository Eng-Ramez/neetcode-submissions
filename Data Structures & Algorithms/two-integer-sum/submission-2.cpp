class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>index;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j){
                    if(arr[i]+arr[j]==target){
                        index.push_back(i);
                        index.push_back(j);
                        return index;
                    }
                }
            }
           
        }
        return index;

    }
};

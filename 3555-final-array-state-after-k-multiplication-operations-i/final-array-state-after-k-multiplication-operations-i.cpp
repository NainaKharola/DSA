class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        while(k--){
            int mini=INT_MAX;
            for(int i=0;i<n;i++){
                mini=min(mini,nums[i]);
            }
            for(int i=0;i<n;i++){
                if(nums[i]==mini){
                    nums[i]*=multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};
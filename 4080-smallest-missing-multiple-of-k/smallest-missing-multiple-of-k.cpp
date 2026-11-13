class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                res.push_back(nums[i]);
            }
        }
        sort(res.begin(),res.end());
        int j=1;
        for(int i=0;i<res.size();i++){
            if(k*j==res[i]){
                j++;
            }
            else if(res[i]>k*j){
                return k*j;
            }
        }
        return k*j;
    }
};
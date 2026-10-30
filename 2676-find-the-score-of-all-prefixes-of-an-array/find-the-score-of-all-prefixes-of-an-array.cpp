class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> res;
        int maxi=nums[0];
        long long sum=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            sum+=nums[i]+maxi;
            res.push_back(sum);
        }
        return res;
    }
};
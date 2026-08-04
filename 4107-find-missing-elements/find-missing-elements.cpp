class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=-1;
        int mini=INT_MAX;
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        vector<int> res;
        for(int i=mini;i<=maxi;i++){
            if(nums[j]==i){
                j++;
            }
            else{
                res.push_back(i);
            }
        }
        return res;
    }
};
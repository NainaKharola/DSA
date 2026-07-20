class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int n=nums.size();
        int mini=nums[0],maxi=nums[n-1];
        int j=0;
        for(int i=mini;i<maxi;i++){
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
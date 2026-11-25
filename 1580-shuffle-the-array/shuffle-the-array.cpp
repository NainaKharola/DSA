class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        int i=0;
        int j=n;
        vector<int> res;
        while(i<j && j<m){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            i++;
            j++;
        }
        return res;
    }
};
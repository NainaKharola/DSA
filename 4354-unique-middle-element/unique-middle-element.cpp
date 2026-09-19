class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int n=nums.size();
        int num=nums[n/2];
        if(freq[num]==1) return true;
        return false;
    }
};
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        unordered_map<int,int> freq1;
        for(auto it:freq){
            freq1[it.second]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq1[freq[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};
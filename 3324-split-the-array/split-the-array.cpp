class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second>2) return false;
        }
        return true;
    }
};
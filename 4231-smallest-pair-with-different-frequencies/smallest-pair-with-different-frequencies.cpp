class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(int x:nums){
            for(int y:nums){
                if(x<y && freq[x]!=freq[y]){
                    return {x,y};
                }
            }
        }
        return {-1,-1};
    }
};
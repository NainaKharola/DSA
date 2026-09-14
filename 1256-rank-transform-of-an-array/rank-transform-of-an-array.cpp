class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums=arr;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int rank=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            mp[nums[i]]=rank++;
        }
        vector<int> res;
        for(int x:arr){
            res.push_back(mp[x]);
        }
        return res;
    }
};
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int count=0, leftover=0;
        for(auto it:freq){
            if(it.second==1){
                leftover+=1;
            }
            else{
                if(it.second==2){
                    count+=1;
                }
                else if(it.second%2==0){
                    count+=it.second/2;
                }
                else{
                    leftover++;
                    count+=it.second/2;
                }
            }
        }
        return {count,leftover};
    }
};
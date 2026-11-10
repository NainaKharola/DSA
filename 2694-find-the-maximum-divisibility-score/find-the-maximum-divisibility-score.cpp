class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int n=nums.size();
        int m=divisors.size();
        int maxValue=0;
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]%divisors[i]==0){
                    count++;
                }
            }
            if(count>maxValue){
                maxValue=count;
                ans=divisors[i];
            }
            else if(count==maxValue){
                ans=min(divisors[i],ans);
            }
        }
        return ans;
    }
};
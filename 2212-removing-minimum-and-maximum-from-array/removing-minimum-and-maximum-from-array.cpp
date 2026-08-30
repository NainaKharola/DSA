class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int minInd=-1;
        int maxInd=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
                minInd=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxInd=i;
            }
        }
        int count1=max(minInd,maxInd)+1;
        int count2=n-min(maxInd,minInd);
        int count3=min(minInd+1+n-maxInd,maxInd+1+n-minInd);
        return min({count1,count2,count3});
    }
};
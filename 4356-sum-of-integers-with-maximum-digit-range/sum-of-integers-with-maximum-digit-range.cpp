class Solution {
public:
    int smallest(int n){
        int mini=INT_MAX;
        while(n>0){
            int r=n%10;
            mini=min(mini,r);
            n/=10;
        }
        return mini;
    }
    int largest(int n){
        int maxi=-11;
        while(n>0){
            int r=n%10;
            maxi=max(maxi,r);
            n/=10;
        }
        return maxi;
    }
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxi=-1;
        for(int i=0;i<n;i++){
            int x=smallest(nums[i]);
            int y=largest(nums[i]);
            maxi=max(maxi,y-x);
        }
        for(int i=0;i<n;i++){
            int range=largest(nums[i])-smallest(nums[i]);
            if(range==maxi){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
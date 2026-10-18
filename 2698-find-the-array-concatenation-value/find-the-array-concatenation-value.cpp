class Solution {
public:
    int value(int n){
        int c=0;
        while(n>0){
            n/=10;
            c++;
        }
        int val=1;
        while(c--){
            val*=10;
        }
        return val;
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1;
        long long sum=0;
        while(i<j){
            sum+=(long long)nums[i]*value(nums[j])+nums[j];
            i++;
            j--;
        }
        if(i==j){
            sum+=nums[i];
        }
        return sum;
    }
};
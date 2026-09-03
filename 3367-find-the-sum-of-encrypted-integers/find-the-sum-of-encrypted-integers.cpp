class Solution {
public:
    int maxNum(int n){
        int maxi=0;
        vector<int> arr;
        while(n>0){
            maxi=max(maxi,n%10);
            arr.push_back(n%10);
            n/=10;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=maxi;
        }
        int num=0;
        for(int i=0;i<arr.size();i++){
            num=num*10+arr[i];
        }
        return num;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else{
                sum+=maxNum(nums[i]);
            }
        }
        return sum;
    }
};
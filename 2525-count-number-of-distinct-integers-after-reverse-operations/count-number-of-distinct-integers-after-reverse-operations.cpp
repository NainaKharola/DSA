class Solution {
public:
    int reverseNum(int n){
        int sum=0;
        while(n>0){
            sum=sum*10+(n%10);
            n/=10;
        }
        return sum;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> arr=nums;
        for(int i=0;i<nums.size();i++){
            arr.push_back(reverseNum(nums[i]));
        }
        set<int> s;
        for(int x:arr){
            s.insert(x);
        }
        return s.size();
    }
};
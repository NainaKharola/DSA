class Solution {
public:
    vector<int> isPresent(int x){
        vector<int> arr;
        if(x==0) arr.push_back(0);
        while(x>0){
            int r=x%10;
            arr.push_back(r);
            x/=10;
        }
        return arr;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            vector<int> arr=isPresent(nums[i]);
            for(int j=0;j<arr.size();j++){
                if(arr[j]==digit){
                    count++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int c=0;
        while(i<j){
            while(i<j && nums[i]!=0){
                i++;
            }
            while(i<j && nums[j]==0){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
                c++;
            }
        }
        return c;
    }
};
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        int i=0;
        while(i<n-1){
            int a=nums[i];
            int b=nums[i+1];
            for(int j=1;j<=a;j++){
                arr.push_back(b);
            }
            i+=2;
        } 
        return arr;
    }
};
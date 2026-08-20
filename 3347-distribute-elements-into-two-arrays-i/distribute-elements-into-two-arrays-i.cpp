class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n=nums.size();
        int i=1;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            int j=arr1.size()-1;
            int k=arr2.size()-1;
            if(arr1[j]>arr2[k]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        i=0;
        vector<int> res;
        while(i<arr1.size()){
            res.push_back(arr1[i]);
            i++;
        }
        int j=0;
        while(j<arr2.size()){
            res.push_back(arr2[j]);
            j++;
        }
        return res;
    }
};
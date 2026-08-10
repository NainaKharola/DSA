class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> res;
        for(int x:nums){
            if(x>0){
                arr1.push_back(x);
            }
            else{
                arr2.push_back(x);
            }
        }
        int n=arr1.size();
        for(int i=0;i<n;i++){
            res.push_back(arr1[i]);
            res.push_back(arr2[i]);
        }
        return res;
    }
};
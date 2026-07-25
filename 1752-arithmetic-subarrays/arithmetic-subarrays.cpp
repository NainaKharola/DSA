class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        int i=0;
        int j=0;
        vector<bool> ans;
        vector<int> arr;
        while(i<n){
            for(int k=l[j];k<=r[j];k++){
                arr.push_back(nums[k]);
            }
            sort(arr.begin(),arr.end());
            int flag=1;
            int x=arr[1]-arr[0];
            for(int k=1;k<arr.size()-1;k++){
                if(arr[k+1]-arr[k]!=x){
                    flag=0;
                    break;
                }
            }
            if(flag){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            i++;
            j++;
            arr.clear();
        }
        return ans;
    }
};
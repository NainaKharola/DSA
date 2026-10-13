class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> arr;
        for(int x:nums){
            arr.push_back(1LL*x*x);
        }
        sort(arr.begin(),arr.end());
        int i=0, j=n-1;
        while(i<j){
            while(i<n && i%2!=0){
                i++;
            }
            while(j>=0 && j%2==0){
                j--;
            }
            if(i<j && arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
            i++;
            j--;
        }
        long long sum=0;
        int c=1;
        for(int i=0;i<n;i++){
            sum+=1LL*arr[i]*c;
            c*=-1;
        }
        return sum;
    }
};
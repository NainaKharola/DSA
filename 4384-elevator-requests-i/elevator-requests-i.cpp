class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m=requests.size();
        int val=0;
        int ans=0;
        for(int i=0;i<m;i++){
            ans+=abs(val-requests[i]);
            val=requests[i];
        }
        return ans;
    }
};
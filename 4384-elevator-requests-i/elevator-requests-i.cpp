class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int x=requests.size();
        int y=0;
        int sum=0;
        for(int i=0;i<x;i++){
            sum+=(abs(y-requests[i]));
            y=requests[i];
        }
        return sum;
    }
};
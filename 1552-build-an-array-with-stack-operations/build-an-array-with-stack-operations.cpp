class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int m=target.size();
        int j=0;
        for(int i=1;i<=target[m-1];i++){
            ans.push_back("Push");
            if(j<m && i==target[j]){
                j++;
            }
            else{
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};
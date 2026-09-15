class Solution {
public:
    long long minimumSteps(string s) {
        int l=s.length();
        int step=0;
        long long ans=0;
        for(char c:s){
            if(c=='1'){
                step++;
            }
            else{
                ans+=step;
            }
        }
        return ans;
    }
};
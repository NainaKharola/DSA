class Solution {
public:
    string finalString(string s) {
        int l=s.length();
        string ans="";
        for(int i=0;i<l;i++){
            if(s[i]!='i'){
                ans+=s[i];
            }
            else{
                reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};
class Solution {
public:
    int countValidPrefixes(string s) {
        int l=s.length();
        int a=0,b=0;
        int ans=0;
        for(int i=0;i<l;i++){
            if(s[i]=='0') a++;
            else b++;
            if(abs(a-b)<=1) ans++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int l=s.length();
        int i=0;
        vector<string> ans;
        while(i+k<=l){
            string str="";
            for(int j=i;j<i+k;j++){
                str+=s[j];
            }
            ans.push_back(str);
            i+=k;
        }
        if(i<l){
            string st="";
            for(int j=i;j<l;j++){
                st+=s[j];
            }
            while(st.length()<k){
                st+=fill;
            }
            ans.push_back(st);
        }
        return ans;
    }
};
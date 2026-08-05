class Solution {
public:
    string capitalizeTitle(string title) {
        int l=title.length();
        string ans="";
        int i=0;
        while(i<l){
            string s="";
            int ind=i;
            while(ind<l && title[ind]!=' '){
                s+=title[ind];
                ind++;
            }
            i=ind+1;
            for(char &c:s){
                if(c>='A' && c<='Z'){
                    c+=32;
                }
            }
            if(s.length()>2){
                s[0]-=32;
            }
            ans+=s;
            if(ind<l) ans+=' ';
        }
        return ans;
    }
};
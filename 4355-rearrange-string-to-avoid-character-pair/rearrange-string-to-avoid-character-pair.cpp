class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int l=s.length();
        string t1="";
        string t2="";
        string t3;
        for(int i=0;i<l;i++){
            if(s[i]==y){
                t1+=s[i];
            }
        }
        for(int i=0;i<l;i++){
            if(s[i]!=x && s[i]!=y){
                t2+=s[i];
            }
        }
        for(int i=0;i<l;i++){
            if(s[i]==x){
                t3+=s[i];
            }
        }
        return t1+t2+t3;
    }
};
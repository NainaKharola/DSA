class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string reverseWords(string s) {
        int l=s.length();
        int i=0;
        int v=0;
        string ans="";
        while(i<l && s[i]!=' '){
            if(isVowel(s[i])) v++;
            ans+=s[i];
            i++;
        }
        int j=i+1;
        while(j<l){
            string str="";
            int c=0;
            while(j<l  && s[j]!=' '){
                if(isVowel(s[j])) c++;
                str+=s[j];
                j++;
            }
            if(c==v){
                reverse(str.begin(),str.end());
            }
            ans+=' ';
            ans+=str;
            j++;
        }
        return ans;
    }
};
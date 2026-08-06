class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string toGoatLatin(string sentence) {
        int l=sentence.length();
        string ans="";
        int i=0;
        int counter=0;
        while(i<l){
            int ind=i;
            string s="";
            while(ind<l && sentence[ind]!=' '){
                s+=sentence[ind];
                ind++;
            }
            i=ind+1;
            if(isVowel(s[0])){
                ans+=s;
                ans+="ma";
                for(int j=0;j<=counter;j++){
                    ans+='a';
                }
            }
            else{
                for(int j=1;j<s.length();j++){
                    ans+=s[j];
                }
                ans+=s[0];
                ans+="ma";
                for(int k=0;k<=counter;k++){
                    ans+='a';
                }
            }
            counter++;
            if(ind<l){
                ans+=' ';
            }
        }
        return ans;
    }
};
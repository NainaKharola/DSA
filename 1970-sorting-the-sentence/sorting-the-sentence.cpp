class Solution {
public:
    string sortSentence(string s) {
        int c=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') c++;
        }
        vector<string> res(c);
        int i=s.length()-1;
        while(i>=0){
            int x=i;
            string str="";
            if(isdigit(s[i])){
                while(i>=0 && s[i]!=' '){
                    i--;
                }
                for(int j=i+1;j<=x;j++){
                    str+=s[j];
                }
                int pos=str.back()-'1';
                str.pop_back();
                res[pos]=str;
                i--;
            }
            else{
                i--;
            }
        }
        string ans="";
        for(int i=0;i<res.size()-1;i++){
            ans+=res[i];
            ans+=' ';
        }
        ans+=res[res.size()-1];
        return ans;
    }
};
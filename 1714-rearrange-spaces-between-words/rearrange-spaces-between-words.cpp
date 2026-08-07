class Solution {
public:
    string reorderSpaces(string text) {
        int l=text.length();
        int i=0;
        int spaces=0;
        for(int j=0;j<l;j++){
            if(text[j]==' '){
                spaces++;
            }
        }
        int count=0;
        string ans="";
        while(i<l){
            while(i<l && text[i]==' '){
                i++;
            }
            if(i==l) break;
            count++;
            while(i<l && text[i]!=' '){
                i++;
            }
        }
        if(count==1){
            int i=0;
            while(i<l &&text[i]==' '){
                i++;
            }
            while(i<l && text[i]!=' '){
                ans+=text[i];
                i++;
            }
            while(spaces--){
                ans+=' ';
            }
            return ans;
        }
        int total=spaces/(count-1);
        int rem=spaces%(count-1);
        int x=0;
        int done=0;
        while(x<l){
            while(x<l && text[x]==' '){
                x++;
            }
            if(x==l) break;
            string s="";
            while(x<l && text[x]!=' '){
                s+=text[x];
                x++;
            }
            ans+=s;
            done++;
            if(done!=count){
                for(int i=0;i<total;i++){
                    ans+=' ';
                }
            }
        }
        while(rem--){
            ans+=' ';
        }
        return ans;
    }
};
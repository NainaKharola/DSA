class Solution {
public:
    string interpret(string command) {
        string ans="";
        int l=command.length();
        int i=0;
        while(i<l){
            if(command[i]>='A' && command[i]<='Z'){
                ans+=command[i];
                i++;
            }
            else if(i<l-1 && command[i]=='(' && command[i+1]==')'){
                ans+='o';
                i+=2;
            }
            else if(i<l-1 && command[i]=='(' && command[i+1]!=')'){
                ans+=command[i+1];
                ans+=command[i+2];
                i+=4;
            }
        }
        return ans;
    }
};
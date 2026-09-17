class Solution {
public:
    int passwordStrength(string password) {
        set<char> s;
        for(char c:password){
            s.insert(c);
        }
        int ans=0;
        for(auto x:s){
            if(x>='a' && x<='z'){
                ans+=1;
            }
            else if(x>='A' && x<='Z'){
                ans+=2;
            }
            else if(x>='0' && x<='9'){
                ans+=3;
            }
            else{
                ans+=5;
            }
        }
        return ans;
    }
};
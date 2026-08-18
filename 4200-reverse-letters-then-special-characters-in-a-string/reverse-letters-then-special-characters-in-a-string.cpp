class Solution {
public:
    bool isAlpha(char c){
        return c>='a' && c<='z';
    }
    string reverseByType(string s) {
        int l=s.length();
        int i=0,j=l-1;
        while(i<j){
            while(i<j && !isAlpha(s[j])){
                j--;
            }
            while(i<j &&!isAlpha(s[i])){
                i++;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        i=0,j=l-1;
        while(i<j){
            while(i<j && isAlpha(s[i])) i++;
            while(i<j && isAlpha(s[j])) j--;
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=1;
        int l=sentence.length();
        string s="";
        for(int i=0;i<l;i++){
            if(sentence[i]==' '){
                if(s.find(searchWord)==0){
                    return count;
                }
                count++;
                s="";
            }
            else{
                s+=sentence[i];
            }
        }
        if(s.find(searchWord)==0){
            return count;
        }
        return -1;
    }
};
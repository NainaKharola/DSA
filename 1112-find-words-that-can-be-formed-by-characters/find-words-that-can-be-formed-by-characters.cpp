class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;
        for(char c:chars){
            freq[c]++;
        }
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            string s=words[i];
            unordered_map<char,int> temp=freq;
            int flag=1;
            for(int j=0;j<s.length();j++){
                if(temp[s[j]]>0){
                    temp[s[j]]--;
                }  
                else{
                    flag=0;
                    break;
                }
            }
            if(flag) count+=s.length();
        }
        return count;
    }
};
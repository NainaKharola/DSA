class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=s.length();
        int count=0;
        for(int i=0;i<l;i++){
            string ans="";
            unordered_map<char,int> freq;
            for(int j=i;j<l;j++){
                freq[s[j]]++;
                if(freq[s[j]]>2){
                    break;
                }
                ans+=s[j];
            }
            count=max(count,(int)ans.length());
        }
        return count;
    }
};
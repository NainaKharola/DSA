class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=s.length();
        int j=0;
        int count=0;
        unordered_map<char,int> freq;
        for(int i=0;i<l;i++){
            freq[s[i]]++;
            while(freq[s[i]]>2){
                freq[s[j]]--;
                j++;
            }
            count=max(count,i-j+1);
        }
        return count;
    }
};
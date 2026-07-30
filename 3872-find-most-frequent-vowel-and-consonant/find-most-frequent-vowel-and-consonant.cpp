class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxFreqSum(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        int maxi1=0, maxi2=0;
        for(auto &it:freq){
            if(isVowel(it.first)){
                maxi1=max(it.second,maxi1);
            }
        }
        for(auto &it:freq){
            if(!isVowel(it.first)){
                maxi2=max(it.second,maxi2);
            }
        }
        return maxi1+maxi2;
    }
};
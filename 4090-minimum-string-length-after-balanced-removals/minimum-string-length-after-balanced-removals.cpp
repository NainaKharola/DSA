class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        return abs(freq['a']-freq['b']);
    }
};
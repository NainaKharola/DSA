class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        int minEven=INT_MAX;
        int maxOdd=0;
        for(auto &it:freq){
            if(it.second%2==0){
                minEven=min(minEven,it.second);
            }
            else{
                maxOdd=max(maxOdd,it.second);
            }
        }
        if(minEven==INT_MAX || maxOdd==0) return -1;
        return maxOdd-minEven;
    }
};
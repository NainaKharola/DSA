class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int> freq;
        for(char c:num){
            freq[c]++;
        }
        int n=num.size();
        for(int i=0;i<n;i++){
            int val=num[i];
            if(freq['0'+i]!=num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};
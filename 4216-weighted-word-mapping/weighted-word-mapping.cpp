class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        int n=words.size();
        for(int i=0;i<n;i++){
            string str=words[i];
            int sum=0;
            for(int j=0;j<str.length();j++){
                sum+=weights[str[j]-'a'];
            }
            int num=sum%26;
            char ch='z'-num;
            ans+=ch;
        }
        return ans;
    }
};
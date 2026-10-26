class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string str=words[j];
                reverse(str.begin(),str.end());
                if(words[i]==str){
                    c++;
                }
            }
        }
        return c;
    }
};
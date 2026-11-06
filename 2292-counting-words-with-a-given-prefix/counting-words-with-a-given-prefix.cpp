class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int m=pref.length();
        int c=0;
        for(int i=0;i<n;i++){
            int k=0;
            string word=words[i];
            int j=0, flag=1;
            if(word.length()<m) continue;
            while(k<m && j<word.length()){
                if(word[j]!=pref[k]){
                    flag=0;
                    break;
                }
                k++;
                j++;
            }
            if(flag) c++;
        }
        return c;
    }
};
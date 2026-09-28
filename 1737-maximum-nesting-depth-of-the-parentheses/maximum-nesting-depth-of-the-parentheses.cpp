class Solution {
public:
    int maxDepth(string s) {
        int maxCount=-1;
        int count=0;
        for(char c:s){
            if(c=='('){
                count++;
            }
            else if(c==')'){
                count--;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
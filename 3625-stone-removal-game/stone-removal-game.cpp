class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int num=10;
        bool flag= true;
        while(n>=num){
            n-=num;
            num--;
            flag=!flag;
        }
        return !flag;
    }
};
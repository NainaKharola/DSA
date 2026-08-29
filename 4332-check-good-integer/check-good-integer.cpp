class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int mul=0;
        while(n>0){
            int r=n%10;
            sum+=r;
            mul+=(r*r);
            n/=10;
        }
        return abs(sum-mul)>=50;
    }
};
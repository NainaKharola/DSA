class Solution {
public:
    long long removeZeros(long long n) {
        long long num=0;
        while(n>0){
            int r=n%10;
            if(r!=0){
                num=num*10+r;
            }
            n/=10;
        }
        n=0;
        while(num>0){
            int r=num%10;
            n=n*10+r;
            num/=10;
        }
        return n;
    }
};
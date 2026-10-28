class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n!=1){
            if(n%2==0){
                int r=n/2;
                n-=r;
                sum+=r;
            }
            else{
                int r=n/2;
                n-=r;
                sum+=r;
            }
        }
        return sum;
    }
};
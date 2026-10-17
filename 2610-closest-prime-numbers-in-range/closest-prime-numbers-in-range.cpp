class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                res.push_back(i);
            }
        }
        if(res.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            mini=min(mini,res[i+1]-res[i]);
        }
        for(int i=0;i<res.size()-1;i++){
            if(res[i+1]-res[i]==mini){
                return {res[i],res[i+1]};
            }
        }
        return {-1,-1};
    }
};
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        long long sum=0;
        while(k--){
            int maxi=0;
            int ind=-1;
            for(int j=0;j<n;j++){
                if(gifts[j]>maxi){
                    maxi=gifts[j];
                    ind=j;
                }
            }
            gifts[ind]=sqrt(maxi);
        }
        for(int i=0;i<n;i++){
            sum+=gifts[i];
        }
        return sum;
    }
};
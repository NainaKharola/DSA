class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> freq;
        while(n>0){
            int r=n%10;
            freq[r]++;
            n/=10;
        }
        int sum=0;
        for(auto it: freq){
            sum+=it.first*it.second;
        }
        return sum;
    }
};
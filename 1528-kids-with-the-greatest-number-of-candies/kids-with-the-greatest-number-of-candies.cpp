class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> res;
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<n;i++){
            int num=candies[i]+extraCandies;
            if(num>=maxi){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> people=heights;
        sort(heights.begin(),heights.end(),greater<int>());
        int n=heights.size();
        vector<string> ans(n);
        int j=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(people[j]==heights[i]){
                    ans[i]=names[j];
                    break;
                }
            }
        }
        return ans;
    }
};
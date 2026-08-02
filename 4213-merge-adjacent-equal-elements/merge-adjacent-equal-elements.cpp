class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;
        for(long long x:nums){
            while(!st.empty() && st.back()==x){
                st.pop_back();
                x*=2;
            }
            st.push_back(x);
            
        }
        return st;
    }
};
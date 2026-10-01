class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> freq;
        vector<int> arr;
        for(int x:nums){
            freq[x]++;
        }
        while(!freq.empty()){
            for(auto it=freq.begin();it!=freq.end();){
                arr.push_back(it->first);
                it->second--;
                if(it->second==0){
                    it=freq.erase(it);
                }
                else{
                    it++;
                }
            }
        }
        return arr;
    }
};
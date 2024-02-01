class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto x:mp){
            if(x.second==1){
            ans+=x.first;
            }
        }
        return ans;
    }
};
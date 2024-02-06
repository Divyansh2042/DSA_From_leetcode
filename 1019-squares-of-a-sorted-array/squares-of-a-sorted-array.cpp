class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Brute Force Approach
        vector<int>v;
        for(auto x:nums){
            v.push_back(x*x);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
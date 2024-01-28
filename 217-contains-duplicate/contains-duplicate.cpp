class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
        unordered_map<int,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        for(auto x:umap){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>umap;
        for(auto x:nums ){
            umap[x]++;
        }
        for(auto x:umap){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
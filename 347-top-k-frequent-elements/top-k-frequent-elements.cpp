class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>umap;
        vector<pair<int,int>>vp;
        for(auto x:nums){
            umap[x]++;
        }
        for(auto x:umap){
            vp.push_back({x.second,x.first});
        }
        sort(vp.begin(),vp.end());
        int n=vp.size()-1;
        vector<int>ans;
        while(k--){
          ans.push_back(vp[n--].second);
        }
       return ans;
    }
};
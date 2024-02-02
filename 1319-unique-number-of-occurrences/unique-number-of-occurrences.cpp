class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(auto &x:arr){
            umap[x]++;
        }
        unordered_set<int>s;
        for(auto i:umap){
            s.insert(i.second);
        }
        return umap.size()==s.size();
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        vector<vector<string>>ans;
        for(auto x:strs){
            string temp=x;
            sort(temp.begin(),temp.end());
            umap[temp].push_back(x);
        }
        for(auto x:umap){
            ans.push_back(x.second);    
        }
        return ans;
    }
};
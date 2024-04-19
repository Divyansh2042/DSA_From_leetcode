class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>umap;
        for(auto c:s){
            umap[c]++;
        }
        unordered_set<int>st;
        for(auto i:umap){
            if(i.second!=0){
                st.insert(i.second);
            }
        }
       return st.size()==1;
    }
};
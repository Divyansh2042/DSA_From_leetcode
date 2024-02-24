class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>umap;
        for(auto n:nums2){
            while(s.size()&&s.top()<n){
                umap[s.top()]=n;
                s.pop();
            }
            s.push(n);

        }
        vector<int>ans;
        for(int n:nums1)ans.push_back(umap.count(n)?umap[n]:-1);
        return ans;
    }
};
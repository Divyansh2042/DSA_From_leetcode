class Solution {
public:
  
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> t;
        set<vector<int>>m;
        function<void(int)>rec=[&](int i){
            if(i==nums.size()){if(m.count(t)==false){ans.push_back(t);}m.insert(t);return;}
            t.push_back(nums[i]);
            rec(i+1);
            t.pop_back();
            rec(i+1);
        };
        rec(0);
        return ans;
    }
};
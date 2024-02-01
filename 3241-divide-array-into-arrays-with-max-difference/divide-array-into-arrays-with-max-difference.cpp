class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans(nums.size()/3,vector<int>(3));
        int cnt=0;
        for(int i=0;i<nums.size();i+=3){
            vector<int>a;
          if(i+2 <nums.size() && nums[i+2]-nums[i]<=k){
             ans[cnt]={nums[i],nums[i+1],nums[i+2]};
             cnt++;
          }else{
              return vector<vector<int>>();
          }
        }
        return ans;
    }
};
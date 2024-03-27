class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefix[n];
        int ans=0;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                ans++;
            }
            if(umap.find(prefix[i]-k)!=umap.end()){
                ans+=umap[prefix[i]-k];
            }
            umap[prefix[i]]++;
        }
        return ans;
    }
};
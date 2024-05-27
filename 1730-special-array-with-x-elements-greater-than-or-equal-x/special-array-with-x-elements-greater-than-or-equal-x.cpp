class Solution {
public:
    int specialArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size(),ans=n;
        while(ans){
            int chk=0;
            for(int i=0;i<n;i++){
               if(nums[i]>=ans){chk++;} 
            }
            if(chk==ans){return ans;}
            ans--;
        }
        return -1;
    }
};
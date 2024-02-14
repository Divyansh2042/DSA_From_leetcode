class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //Brute Force Approach
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int j=0;
        for(int i=0;i<n;i+=2){
            nums[i]=pos[j];
            nums[i+1]=neg[j];
            j++;
        }
        return nums;
    }
};
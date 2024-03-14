class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixSum=0;
        int prefixSumCount=0;
        unordered_map<int,int>prefixSumMap;
        prefixSumMap[0]=1;
        for(auto num:nums){
            prefixSum+=num;
            prefixSumCount+=prefixSumMap[prefixSum-goal];
            prefixSumMap[prefixSum]++;
        }
        return prefixSumCount;
    }
};
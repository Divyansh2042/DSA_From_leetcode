class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int start=0,end=num.size()-1;
        while(start<end){
            if(num[start]+num[end]==target){
                return {start+1,end+1};
            }else if(num[start]+num[end]<target)start++;
            else end--;
        }
        return {};
    }
};
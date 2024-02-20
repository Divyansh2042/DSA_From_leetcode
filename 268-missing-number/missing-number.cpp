class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int totalXor=0;
        for(auto num:arr)totalXor^=num;
        for(int i=0;i<=arr.size();i++){
         totalXor^=i;
        }
        return totalXor;
    }
};
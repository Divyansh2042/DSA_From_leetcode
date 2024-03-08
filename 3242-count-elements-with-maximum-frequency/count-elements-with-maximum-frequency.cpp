class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        int x=0;
        map<int,int>aux;
        for(auto i:nums){
            x=max(x,++aux[i]);
        }
        for(auto &j:aux){
            if(j.second==x){
                count+=x;
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>us;
        for(auto num:nums1){
           us.insert(num);
        }
        int count=0;
        for(auto num:nums2){
            if(us.find(num)!=us.end()){
                count++;
            }
        }
         unordered_set<int>us1;
        for(auto num:nums2){
           us1.insert(num);
        }
        int count1=0;
        for(auto num2:nums1){
           if(us1.find(num2)!=us1.end()){
                count1++;
            }
        }
        ans.push_back(count1);
        ans.push_back(count);
        return ans;
    }
};
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;//Vector to store the {answer1,answer2}
        //insertion in 1st set
        unordered_set<int>us;
        for(auto num:nums1){
           us.insert(num);
        }
        //count : answer2 the number of indices i such that nums2[i] exists in nums1.
        int count=0;
        for(auto num:nums2){
            if(us.find(num)!=us.end()){
                count++;
            }
        }
        //insertion in 2nd set
         unordered_set<int>us1;
        for(auto num:nums2){
           us1.insert(num);
        }
        // count: answer1 : the number of indices i such that nums1[i] exists in nums2.
        int count1=0;
        for(auto num2:nums1){
           if(us1.find(num2)!=us1.end()){
                count1++;
            }
        }
        //insert in vectors 
        ans.push_back(count1);
        ans.push_back(count);
        return ans;//return ans
    }
};
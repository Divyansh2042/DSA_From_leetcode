class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_set<int>st;
        unordered_set<int>st1;
        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            int key=nums2[j];
            if(st.find(key)!=st.end()){
                st1.insert(nums2[j]);
            }
        }
       for(auto itr=st1.begin();itr!=st1.end();itr++){
           v.push_back((*itr));
       }
        return v;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int maxi=0;
        int ans=0;
        while(left<right){
            maxi=(right-left)*min(height[left],height[right]);
            ans=max(ans,maxi);
            if(height[left]<height[right]){
                left++;
            }
            else{
               right--;
            }
        }
        return ans;
    }
};
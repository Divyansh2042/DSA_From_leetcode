class Solution {
public:
    int maxArea(vector<int>& height) {
       //Brute Force Approach
    //    int max1=0,area; 
    //    for(int i=0;i<height.size();i++){
    //        for(int j=i+1;j<height.size();j++){
    //             area=(j-i)*min(height[i],height[j]);
    //             max1=max(max1,area);
    //        }
    //    }
    //    return max1;
    //Optimal Appraoch
    ios_base::sync_with_stdio(0); cin.tie(0);
    int max1=0,area;;
    int left=0,right=height.size()-1;
    while(left<right){
        area=(right-left)*min(height[left],height[right]);
        max1=max(max1,area);
        if(height[left]<height[right]){
            left++;
        }else {
            right--;
        }
    }
    return max1;
    }
};
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        std::function<void(int,int)>quickSort=[&](int left,int right){
            if(left>=right){
                return;
            }
            int pivotIndex=left+(right-left)/2;
            int pivotValue=nums[pivotIndex];
            int i=left-1;
            int j=right+1;
            while(i<j){
                do{
                    i++;
                }while(nums[i]<pivotValue);
                do{
                    j--;
                }while(nums[j]>pivotValue);
                if(i<j){
                    swap(nums[i],nums[j]);
                }
            }
            quickSort(left,j);//left SubArray
            quickSort(j+1,right);//rigt SubArray
        };
        quickSort(0,nums.size()-1);
        return nums;
    }
};
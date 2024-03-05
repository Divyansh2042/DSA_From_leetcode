class Solution {
public:
    int minimumLength(string s) {
        int n=s.size()-1;
        int left=0,right=n;
        while(left<right && s[left]==s[right]){
            char ch=s[left];
            while(left<=right && s[left]==ch){
                left++;
            }
            while(right>=left && s[right]==ch){
                right--;
            }
        }
        return (right-left+1);
    }
};
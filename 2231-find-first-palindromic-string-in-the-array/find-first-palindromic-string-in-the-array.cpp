class Solution {
public:
    bool check(string &s){
       string temp=s;
       reverse(s.begin(),s.end());
       return s==temp;
    }
    string firstPalindrome(vector<string>& words) {
       for(auto i:words){
           if(check(i)){
               return i;
           }
       } 
       return ""; 
    }
};
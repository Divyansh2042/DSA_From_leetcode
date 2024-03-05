class Solution {
public:
    string reversePrefix(string word, char ch) {
       //Brute Force
       int n=word.size();
       int j=0;
       for(int i=0;i<n;i++){
           if(word[i]==ch){
               j=i;
               break;
           }
       }
      if(j!=0)reverse(word.begin(),word.begin()+j+1);
      return word;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int index=0;
        while(index<word1.length() && index<word2.length()){
            ans.push_back(word1[index]);
            ans.push_back(word2[index]);
            index++;
        }
        while(index<word1.length()){
            ans.push_back(word1[index++]);
        }
         while(index<word2.length()){
            ans.push_back(word2[index++]);
        }
        return ans;
    }
};
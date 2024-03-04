class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0,j=n-1;
        int score=0;
        if(n==1 && tokens[0]>power)return 0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
            }
            else if(i==j){
                score=score+(power>=tokens[i]);
                i++;
            }else if(score){
                power+=tokens[j];
                score--;
                j--;
            }else{
                i++;
                j--;
            }
        }
        return score;
    }
};
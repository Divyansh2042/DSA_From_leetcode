class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int score=0;
        int i=0,j=n-1;
        if(n==1 && tokens[0]>power)
            return 0;      
        while(i<=j){
            if(power>=tokens[i]){
                power=power-tokens[i];
                cout << power<<endl;
                score++;
                i++;
            }
            else if(i==j){
                score=score+(power>=tokens[i]);
                i++;
            }
            else if(score){
                  power+=tokens[j];
                  cout << power << endl;
                  j--;
                  score--;
            }
            else{
                i++,j--;
            }
        }
        return score;
    }
};
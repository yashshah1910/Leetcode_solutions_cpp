class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int ans=0,score=0;
        if(tokens.size()==0||tokens[0]>power) return 0;//Condition of zero answer.
        while(i<=j)
        {
            if(power>=tokens[i])//Power is enough to face up the token[i];
            {
                ans++;
                power-=tokens[i];
                i++;
            }
            else //facing down the largest token to get max power.
            {
                score=max(ans,score);
                ans--;
                power+=tokens[j];
                j--;
            }
        }
        return max(score,ans);
    }
};
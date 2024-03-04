class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0, n =  tokens.size();
        sort(tokens.begin(), tokens.end());
        int final_score = 0, i = 0, j = n-1;
        if(n==0 || (tokens[0] > power) )return 0;
        while(i<n and j>=0){
            if(tokens[i] <= power){
                power -= tokens[i++];
                score ++;
                final_score = max(final_score , score);
            }
            else if (score >= 1){
                power += tokens[j];
                j--;
                score --;
            }

        }
        return final_score;
    }
};
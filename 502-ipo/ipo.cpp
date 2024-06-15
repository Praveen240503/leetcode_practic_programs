class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<pair<int,int>>pairs;
        for(int i = 0; i < profits.size(); i++){
            pairs.push_back({ capital[i],profits[i],});
        }
        sort(pairs.begin(), pairs.end());
        // for(auto it:pairs)cout<<it.first<<" "<<it.second<<"\n";
        int j = 0;
        priority_queue<int>p_queue;
        for(int i = 0; i < k; i++){
            
            while(j < profits.size() and pairs[j].first <= w){
                p_queue.push(pairs[j++].second);
            }
            if(p_queue.empty()){
                break;
            }
            w += p_queue.top();
            p_queue.pop();
        }
        return w;
    }
};
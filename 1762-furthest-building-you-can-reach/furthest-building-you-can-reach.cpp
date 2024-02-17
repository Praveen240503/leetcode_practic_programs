class Solution {
public:
    priority_queue<int> p;
    int fun(vector<int>h, int b, int l) {
        int i=0;
        for(i=0; i<h.size()-1; i++){ 
            int diff = h[i+1]-h[i];
            if(diff <= 0){
                continue;
            }
            b -= diff; 
            p.push(diff); 
            if(b < 0){
                b += p.top();
                // cout<<b<<" ";
                p.pop(); 
                l--;
            }
            if(l < 0) break;
        }
        return i;
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return fun(heights, bricks, ladders);
    }
};
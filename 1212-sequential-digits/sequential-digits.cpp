class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>tr;
        for(int i=1;i<=9;i++){
            int a=i;
            int b=i+1;
            
            while(a<=high and b<=9){
                a=a*10+b;
                //cout<<a<<" ";
                if(low<=a and a<=high)tr.push_back(a);
                b++;
            }
            
        }
        sort(tr.begin(),tr.end());
        return tr;
    }
};
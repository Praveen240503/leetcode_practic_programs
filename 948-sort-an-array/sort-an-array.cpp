class Solution {
public:
    void Merge(int low,int mid,int high,vector<int>&tr){
        int i=low;
        int j=mid+1;
        vector<int>temp;
        while(i<=mid and j<=high){
            if(tr[i]<tr[j]){
                temp.push_back(tr[i++]);
            }
            else{
                temp.push_back(tr[j++]); 
            }
        }
        while(i<=mid){
            temp.push_back(tr[i++]);
        }
        while(j<=high){
            temp.push_back(tr[j++]);
        }
        for(int i=low;i<=high;i++){
            tr[i]=temp[i-low];
        }
    }
    void MergeSort(int low,int high,vector<int>&tr){
        
        if(low>=high)return;
        int mid=low+(high-low)/2;
        MergeSort(low,mid,tr);
        MergeSort(mid+1,high,tr);

        Merge(low,mid,high,tr);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();

        MergeSort(0,n-1,nums);
        return nums;
    }
};
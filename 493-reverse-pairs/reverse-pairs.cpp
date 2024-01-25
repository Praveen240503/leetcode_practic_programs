class Solution {
public:
    int Merge(int low,int mid ,int high,vector<int>&tr){
        int i=low;
        int j=mid+1;
        int x = low;
        int y = mid + 1;
        int ans=0;
        while(y <= high and x <= mid){
            if(tr[x] > 2LL*tr[y]){
                ans+=(mid - x)+1;
                y++;
            }
            else x++;
        }
        int k=low;
        int temp[high+1];
        while(i<=mid and j<=high){
            if(tr[i]<tr[j]){
                temp[k++]=tr[i++];

            }
            else{
                temp[k++]=tr[j++];
            }
        }
        while(i<=mid){
            temp[k++]=tr[i++];
        }
        while(j<=high){
            temp[k++]=tr[j++];
        }
        for(int i=low;i<=high;i++){
            tr[i]=temp[i];
        }
        return ans;
    }
    int MergeSort(int low,int high,vector<int>&tr){
        int mid=low+(high-low)/2;
        if(low>=high)return 0;
        int c=0;
        c= MergeSort(low,mid,tr);
        c+=MergeSort(mid+1,high,tr);
        c+=Merge(low,mid,high,tr);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return MergeSort(0,n-1,nums);
    }
};
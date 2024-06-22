class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int cnt=0;
        HashMap<Integer,Integer>mm=new HashMap<>();;
        int c=0;
        int n=nums.length;
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            c++;
            if(nums[i]%2!=0)
            {
            arr[i]=0;
            c=0;
            }
            arr[i]=c;
            if(arr[i]==0)
            {
                cnt++;
                mm.put(cnt,i);
            }
        }
        //System.out.println(mm);
        // for(int i=0;i<n;i++){
        // System.out.println(arr[i]);}
        int f_co=0,s_co=0,res=0;
        for(int i=k;i<=cnt;i++){
            int t0=mm.get(i-k+1);
            if(t0==0)f_co=1;
            else{
                f_co=arr[t0-1]+1;
            }
            
            if(i+1<=cnt){
                int t2=mm.get(i+1);
                s_co=arr[t2-1]+1;
            }
            else{
                if(arr[n-1]==0)s_co=1;
                else s_co=arr[n-1]+1;
            }
            res+= f_co*s_co;
        }
        return res;
    }
}
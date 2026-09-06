class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long f=0;
        long long s=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            f+=nums[i];
        }
        for(int i=n/2;i<n;i++){
            s+=nums[i];
        }
        // if(f>s){
        //     ans++;
        // }
        int i=0;
        int j=n/2;
        while(i<n){
            if(j>=n){
                j=0;
            }
            f-=nums[i];
            f+=nums[j];
            s-=nums[j];
            s+=nums[i];
            if(f>s){
                ans++;
            }
            i++;
            j++;
            
        }
        return ans;
    }
};
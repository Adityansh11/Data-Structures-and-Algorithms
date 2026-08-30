class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int f=0,s=0;
        if(n<3){
            return n;
        }
        int mn=nums[0];
        int mx =nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<mn){
                mn=nums[i];
                f=i;
            }
            if(nums[i]>mx){
                mx=nums[i];
                s=i;
            }
        }
        int ans;
        int a=max(f,s)+1;
        int b=n-min(f,s);
        int c=min(f, s) + 1 + n - max(f, s);
        return min({a,b,c});
    }
};
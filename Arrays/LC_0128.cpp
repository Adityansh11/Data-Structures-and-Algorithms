class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int mn=nums[0];
        int mx=nums[0];
        for(int i=0;i<n;i++){
            mp.insert(nums[i]);
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        if(mn==mx){
            return 1;
        }
        int check =1;
        int ans=1;
        for(int i=mn;i<mx;i++){
            if(mp.count(i) && mp.count(i+1)){
                check++;
            }else{
                check=1;
            }
            ans=max(check,ans);
        }
        return ans;
            }
};
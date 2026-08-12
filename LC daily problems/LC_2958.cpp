class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int st=0;
        int end=0;
        unordered_map<int,int>mp;
        int ans=0;
        while(end<n){
            mp[nums[end++]]++;
            while(mp[nums[end-1]]>k){
                mp[nums[st]]--;
                st++;
            }
            
            ans=max(ans,end-st);

        }
        return ans;
    }
};
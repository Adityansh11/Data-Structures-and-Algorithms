class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int>mp;
        int n=nums.size();
        int mn=nums[0];
        int mx=nums[0];
        for(int i=0;i<n;i++){
            mp.insert(nums[i]);
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        for(int i=mn;i<mx;i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        ans1.push_back(nums[0]);
        ans2.push_back(nums[1]);
        int n=nums.size();
        if(n<2){
            return nums;
        }
        int end=2;
        while(end<n){
            if(ans1[ans1.size()-1]>ans2[ans2.size()-1]){
                ans1.push_back(nums[end++]);
            }else{
                ans2.push_back(nums[end++]);
            }

        }
        for(int i:ans2){
            ans1.push_back(i);
        }
        return ans1;
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int min1,min2,max1,max2,max3;
    
        sort(nums.begin(),nums.end());
            min1=nums[0];
            min2=nums[1];
            max1=nums[n-1];
            max2=nums[n-2];
            max3=nums[n-3];
    
    return max(min1*min2*max1,max1*max2*max3);
    }
};
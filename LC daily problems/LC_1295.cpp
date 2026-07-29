class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int n=0;
            while(i>0){
                n++;
                i/=10;
            }
            if(n%2==0){
                ans++;
            }
        }
        return ans;
    }
};
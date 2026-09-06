class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd=false;
        int mnodd=INT_MAX;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==1){
            mnodd=min(mnodd,nums1[i]);
            odd=true;
            }
        }
        if(odd==false){
            return true;
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0 && nums1[i]<mnodd ){
                return false;
            }
        }
        return true;
    }
};
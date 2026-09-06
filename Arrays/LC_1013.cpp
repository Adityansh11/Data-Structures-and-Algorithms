class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3!=0){
            return false;
        }
        int count=0;
        int target=0;
        for(int i=0;i<n;i++){
            target+=arr[i];
            if(target==sum/3){
                target=0;
                count++;
            }
        }
        return count>=3;
    }
};
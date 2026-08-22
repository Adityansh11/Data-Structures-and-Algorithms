class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int m=1;
        int ans=n;
        while(ans>0){
            s+=ans%10;
            m*=ans%10;
            ans/=10;
        }
        ans=s+m;
        return n%ans==0;
    }
};
class Solution {
public:
    int countRotations(string s, int k) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==s[(i+1)%n]){
                ans++;
            }
        }
        int total=0;
        for(int i=0;i<n;i++){
            int prev=(i-1+n)%n;
            int score=ans-(s[prev]==s[i]);
        if(score==k){
            total++;
        }
        }
        return total;
    }
};
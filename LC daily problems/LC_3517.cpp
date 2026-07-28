class Solution {
public:
// string pal(string &a){
// if(a.length()==n){
//     return a;
// }

// }
    string smallestPalindrome(string s) {
        string ans="";
        // pal(ans);
        // sort(s.begin(),s.end());
        int n=s.length();
        int i;
        for(i=0;i<n/2;i++){
            ans.push_back(s[i]);
        }
        sort(ans.begin(),ans.end());
        string str="";
        for(int j=ans.length()-1;j>=0;j--){
            str+=ans[j];
        }
        if(n%2!=0){
            ans.push_back(s[i]);
        }
        ans+=str;

        return ans;
    }
};
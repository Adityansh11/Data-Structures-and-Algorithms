
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int ans=0;
        int st=0;
        int end=0;
        int ch=0;
        unordered_set<char>mp;
        mp.insert('a');  
        mp.insert('e');
        mp.insert('i');
        mp.insert('o');
        mp.insert('u');
        for(end=0;end<k;end++){
            if(mp.count(s[end])){
            ans++;
            }
            ch=ans;
        }
        while(end<n){
            if(mp.count(s[end])){
            ans++;
            }
            if(mp.count(s[st])){
            ans--;
            }
            end++;
            st++;
            
            ch=max(ans,ch);
        }


        return ch;
    }
};
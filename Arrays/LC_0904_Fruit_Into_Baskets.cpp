class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int st=0;
        int end=0;
        int ans=0;
        unordered_map<int,int>mp;
        while(end<n){
        mp[fruits[end]]++;
        end++;

        while(mp.size()>2){
            mp[fruits[st]]--;
            if(mp[fruits[st]]==0){
                mp.erase(fruits[st]);
            }
            st++;
        }
        
        ans=max(ans,end-st);
        }
        return ans;        
    }
};
// Largest Integer With Given Digit Sum

class Solution {
public:
    int largestInteger(int n, int s) {
        double ans=(double)s/n;
        int ch=0;
        if(ans>9.0){
            return -1;
        }
        while(n>0){
            if(s/10>0){
                ch=ch*10+9;
                s-=9;
            }else{
                ch=ch*10+s;
                s-=s;
            }
            n--;
        }
        return ch;
    }
};
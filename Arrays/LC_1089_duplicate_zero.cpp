#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
                int n=arr.size();
        vector<int>num(n);
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0 && j<n){
                num[j]=0;
                if(j+1<n){
                num[j+1]=0;
                j++;
                }
            }
            else {
                if(j<n){
                num[j]=arr[i];
            }
            }
            j++;
        }
        arr=num;
    }
};

    int main(){
        vector<int> arr;
        cout<<"enter values in arr"<< endl;
        int n;
        cin>>n;
        
        duplicateZeros(arr);
        int i=0;
        while(i<n){
            cout<<arr[i++];
        }
        return 0;
    }
};
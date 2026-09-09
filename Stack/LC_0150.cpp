class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int n=tokens.size();
        int i=0;
        while(i<n){
            if(tokens[i]=="+"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(f+s);
            }
            else if(tokens[i]=="*"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(f*s);
            }
            else if(tokens[i]=="/"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(s/f);
            }
            else if(tokens[i]=="-"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(s-f);
            }else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();

    }
};
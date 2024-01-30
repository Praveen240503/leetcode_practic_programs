class Solution {
public:
    stack<int>st;
    int evalRPN(vector<string>& tr) {
    for(int i=0;i<tr.size();i++){
        
        if(tr[i]!="+" && tr[i]!="-" && tr[i]!="*" && tr[i]!="/"){
            int a = stoi(tr[i]);
            st.push(a);
        }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();

            if(tr[i]=="+")st.push(a+b);
            else if(tr[i]=="-")st.push(b-a);
            else if(tr[i]=="*")st.push(a*b);
            else st.push(b/a);
        }
    }
    
    return st.top();
    }
};
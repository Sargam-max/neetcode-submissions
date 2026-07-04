class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int s=tokens.size();

        stack<int>st;

        for(auto i:tokens){
            if(i=="+"){
                int k1=st.top();
                st.pop();
                int k2=st.top();
                st.pop();

                st.push(k1+k2);
            }
            else if(i=="-"){
                int k1=st.top();
                st.pop();
                int k2=st.top();
                st.pop();
                st.push(k2-k1);
            }

            else if(i=="*"){
                int k1=st.top();
                st.pop();
                int k2=st.top();
                st.pop();
                st.push(k2*k1);
            }

            else if(i=="/"){
                int k1=st.top();
                st.pop();
                int k2=st.top();
                st.pop();
                st.push(k2/k1);
            }

            else{
                st.push(stoi(i));
            }
        }


        return st.top();


        



        



        
    }
};

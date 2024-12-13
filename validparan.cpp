class Solution {
    public:
        bool isValid(string s) {
            stack<char>st;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                    st.push(s[i]);
                }
                else{
                    //Always to check the below condition before popping, else it gives run time error.
                    if(st.empty()){
                        return false;
                    }
                    char c = st.top();
                    st.pop();
                    if((s[i] == ')' && c == '(') || (s[i] == ']' && c == '[') || (s[i] == '}' && c == '{')){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            }
            if(st.empty()){
                return true;
            }
            else{
                return false;
            }
        }
    };
    
class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& t) {
            int n = t.size();
            vector<int>ans(n, 0);
            stack<int>st;
            for(int i = n-1; i >= 0; i--){
                while(!st.empty() && t[st.top()] <= t[i]){
                    st.pop();
                }
                if(!st.empty()){
                    ans[i] = st.top() - i;
                }
                st.push(i);
            }
            return ans;
    
    
    
    
            // vector<int>res(t.size(), 0);
            // for(int i = 0; i < t.size() - 1; i++){
            //     int c = 0;
            //     for(int j = i+1; j < t.size(); j++){
            //         if(t[i] < t[j]){
            //             c++;
            //             res[i] = c;
            //             break;
            //         }
            //         else{
            //             c++;
            //         }
            //     }
            // }
            // return res;
        }
    };
    
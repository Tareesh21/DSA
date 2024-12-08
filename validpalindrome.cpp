class Solution {
    public:
        bool isPalindrome(string s) {
            string res;
            for(char ch : s){
                if(isalnum(ch)){
                    res += tolower(ch);
                }
            }
            int i=0, j=res.size()-1;
            while(i<j){
                if(res[i]!=res[j]){
                    return false;
                }
                else{
                    i++;
                    j--;
                }
            }
            return true;
        }
    };
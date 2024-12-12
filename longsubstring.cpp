class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int mx = 0;
            int i = 0, j = 0;
            unordered_map<char, int> mp;
            while(j < s.length()){
                mp[s[j]]++;
                if(mp.size() > j-i+1){
                    j++;
                }
                else if(mp.size() == j-i+1){
                    mx = max(mx, j-i+1);
                    j++;
                }
                else if(mp.size() < j - i + 1) {// Triggered when duplicates are present
                    while(mp.size() < j - i + 1) { // Shrink window until no duplicates
                        mp[s[i]]--;              // Decrement frequency of the leftmost character
                        if(mp[s[i]] == 0) {      // If frequency becomes zero, remove it
                            mp.erase(s[i]);
                        }
                        i++;              // Move the left pointer
                    }
                    j++;               // Move the right pointer
                }
            }
            return mx;
        }
    };
    
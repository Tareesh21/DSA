class Solution {
    public:
        int maxArea(vector<int>& h) {
            int i = 0, n = h.size(), j = n - 1;
            int s = 0, ma = -1;
            while(i < j){
                s = (j - i)*min(h[i], h[j]);
                ma = max(s, ma);
                if (h[i] < h[j]) {
                    i++;
                } else 
                {
                    j--;
                }
            }
            return ma;
        }
    };
    
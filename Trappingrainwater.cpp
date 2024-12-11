class Solution {
    public:
        int trap(vector<int>& h) {
            int n = h.size();
            vector<int> maxL(n), maxR(n), water(n);
            int sum = 0;
            maxL[0] = h[0];
            for(int i = 1; i < n; i++){
                maxL[i] = max(maxL[i-1], h[i]);
            }
            maxR[n-1] = h[n-1];
            for(int i = n - 2; i >= 0; i--){
                maxR[i] = max(maxR[i+1], h[i]);
            }
            for(int i = 0; i < n; i++){
                water[i] = min(maxL[i], maxR[i]) - h[i];
                sum = sum + water[i];
            }
            return sum;
        }
    };
    
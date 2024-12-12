class Solution {
    public:
        int maxProfit(vector<int>& p) {
               int a = p[0], diff = 0, maxprof = 0;
        for (int i = 1; i < p.size(); i++) {
            diff = p[i] - a;
            maxprof = max(maxprof, diff);
            a = min(a, p[i]);
        }
        return maxprof;
        }
    
        
        //     int profit = 0, ma = 0;
        //     for(int i = 0; i < p.size(); i++){
        //         for(int j = i + 1; j < p.size(); j++){
        //             profit = p[j] - p[i];
        //             ma = max(profit, ma); 
        //         }
        //     }
        //     return ma;
        // }
    
    };
    
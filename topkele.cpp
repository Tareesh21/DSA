class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int>res, op;
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
    
            priority_queue<pair<int, int>> maxHeap;
            for (auto i : mp) {
                maxHeap.push({i.second, i.first}); 
            }
    
            for (int i = 0; i < k; i++) {
                op.push_back(maxHeap.top().second); 
                maxHeap.pop();
            }
            return op;
        }
    };
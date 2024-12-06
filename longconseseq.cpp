class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if(nums.size() == 0){
                return 0;
            }
            sort(nums.begin(), nums.end());
            int count = 0, longest = 1, ls = -10000;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] - 1 == ls){
                    count = count + 1;
                    ls = nums[i];
                }
                else if(nums[i] != ls){
                    count = 1;
                    ls = nums[i];
                }
                longest = max(longest, count);
            }
            return longest;
        }
    };
      
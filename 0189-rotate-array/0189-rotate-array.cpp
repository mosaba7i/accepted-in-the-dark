// update 2 -> optimized (learned and used reversed o(n) instead of putting erase in a while loop which causes o(n^2))

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp;
        k = k % nums.size();
        if (k == 0) 
            return ;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin() ,nums.begin()+k);
        reverse(nums.begin()+k, nums.end());        
    }
};
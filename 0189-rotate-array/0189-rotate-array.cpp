class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp;
        
        
        if (k > nums.size()) // will repeate for sure hehe
        {
            k = k % nums.size();
        }
        if (k == nums.size()) // i mean why not :)
            return ;
        int s = nums.size() - k;
        int i = 0;
        while (i < s)
        {
            tmp.push_back(nums[0]); // 1 2 3 4
            nums.erase(nums.begin());
            i++;
        }
        i = 0;
        while (i < s)
        {
            nums.push_back(tmp[i]);
            i++;
        }
    }
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int m = 0;
        while(l <= h)
        {
            m = l + (h-l)/2; 
            if (nums[m] == target)
                return(m);
            if (nums[m] > target)
                h = m - 1;
            else if (nums[m] < target)
                l = m + 1; 

        }
        return(l);
    }
};
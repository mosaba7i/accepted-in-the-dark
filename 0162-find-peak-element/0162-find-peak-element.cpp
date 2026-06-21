class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        int m = 0;
        while(l <= h)
        {
            m = l + (h-l)/2;
            if (l == h)
                return(m);
            if (m > 0 && m +1 <= h && nums[m] > nums[m-1] && nums[m] > nums[m+1])
                return(m);
            if (nums[m] > nums[m+1]) // 3 4
                h = m - 1;
            else if (nums[m] < nums[m+1])
                l = m + 1; 
        }
        return(l);
    }
};
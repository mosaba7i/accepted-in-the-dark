 vector<int> get_all_target_index(vector<int>& nums,int target)
{
    int i = -1;
    vector<int> nums2;
    while  (++i < nums.size())
        if (nums[i] == target)
            nums2.push_back(i);
    return(nums2);
}


int get_min_distance(vector<int>& nums, int target, int start)
{
    int min_d = 1001;
    int i = 0;
    vector<int> nums2 = get_all_target_index(nums, target);
    int d = 1001;
    while (i < nums2.size())
    {
        d = start - nums2[i];
        if (d < 0)
            d *=-1;
        if (d < min_d )
            min_d = d;
        i++;
    }
    return (min_d);
}
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        return(get_min_distance(nums, target, start));
    }
};
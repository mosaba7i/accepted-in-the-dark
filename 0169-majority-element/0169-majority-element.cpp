
int get_index(vector <int> nums)
{
    int i = 0;
    int num_index = 0;
    int high_number = 0;
    while (i < nums.size())
    {
        if (nums[i] > high_number)
        {
            high_number = nums[i];
            num_index = i;
        }
        i++;
    }
    return(num_index);
}
int check_is_checked_before(int n, vector <int> nums)
{
    int i = 0;
    while (i < nums.size())
    {
        if (n  == nums[i])
            return(1);
        i++;
    }
    return(0);
}
int check_biggest(vector<int>& nums)
{
    int s = nums.size();
    int i;
    int counter;
    int j;
    vector <int> checked_nums;
    vector <int> counters;
    i = 0;
    while  (i < s)
    {
            counter = 0;
            while ( i < s && check_is_checked_before(nums[i], checked_nums))
            {
                i++;
            }
             if (i == s)
                    break;
            j = 0;
            while (j < s)
            {
                if  (nums[i] == nums[j])
                    counter++;
                j++;
            }
            counters.push_back(counter);
            checked_nums.push_back(nums[i]);
            i++;
        
    }
    int index = get_index(counters);
    return(checked_nums[index]);

}
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        return(check_biggest(nums));
    }
};
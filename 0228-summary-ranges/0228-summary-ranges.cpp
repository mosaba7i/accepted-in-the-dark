string make_string(int a , int b)
{
    return (to_string(a)+"->"+to_string(b));
}
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        int i = 0;
        int a = 0;
        int b = 0;
        while (i < nums.size())
        {
            a = nums[i];

            if ( i + 1 < nums.size() && a + 1 == nums[i+1])
                {
                    int k = 1;
                    while (i + 1 < nums.size() && a + k == nums[i+1])
                    {
                        b = nums[i+1];
                        i++;
                        k++;
                    }
                    s.push_back(make_string(a,b));
                }
            else if ( i < nums.size())
                s.push_back(to_string(a));
            i++;
        }
        return(s);

    }
};
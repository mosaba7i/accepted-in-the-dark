class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i = 0; i < nums.size();i++)
        {
            int n = nums[i];
            while(n)
            {
                int input_digit = n % 10;
                if ((input_digit) == digit) 
                    count++;
                n = n /10;
            }
        }
        return(count);
    }
};
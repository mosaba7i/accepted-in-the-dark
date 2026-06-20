class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sum;
        int i = 0;
        int j = numbers.size() - 1;
        
        while(i < j)
        {
            if (numbers[i] + numbers[j] > target)
                j--;
            else if (numbers[i] + numbers[j] < target)
                i++;
            else 
            {
                sum.push_back(i + 1);
                sum.push_back(j + 1);
                return (sum);
            }
        }
        return(sum);
    }
};

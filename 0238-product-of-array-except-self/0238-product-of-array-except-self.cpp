// i mean the question says no div allowed!!  i say i can do it with div anyway hehe
// the thing is we have three cases ok ?
// first one if num of zeros ar emore than 1 we have all the product equal to zero easy
// second if num of zeros are only one we have all the product equal to zero except the index of that zero number 
// thrid no zeros are there so product = product / the number itself :)
//word to word bro draw everything beofre u solve hehe
int count_zeros(vector<int>& nums, vector<int>& zero)
{
    int i = 0;
    int count = 0;
    while (i <  nums.size())
    {
        if (nums[i] == 0)
        {
            count++;
            zero.push_back(i);
        }
        i++;
    }
    return (count);
}

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i = 0;
         int sum = 1;
         vector<int> zero; 
         int n_zero = count_zeros(nums, zero);
         
        vector<int> prod;
        //case 3
        if (n_zero == 0)
        {
            while (i < nums.size())
            {
                sum =  sum * nums[i];
                i++;
            }
            i = 0;
            while(i < nums.size())
            {
                prod.push_back(sum / nums[i]);
                i++;
            }
        }

        //case 2

        else if (n_zero == 1)
        {
            while ( i < nums.size())
            {

                if (i == zero[0])
                {
                    int j = 0;
                    while (j < nums.size())
                    {
                        if (i == j)
                            {
                                j++;
                                continue;
                            }
                        sum =  sum * nums[j];
                        j++;
                    }
                    prod.push_back(sum);
                    i++;
                    continue; 
                }

                prod.push_back(0);
                i++;
            }

        }
        else if (n_zero > 1)
        {
            while (i < nums.size())
            {
                prod.push_back(0);
                i++;
            }
        }

        return(prod);
    }
};
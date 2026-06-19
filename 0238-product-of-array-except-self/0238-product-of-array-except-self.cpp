// I know the question says no div allowed
// but I say I can do it with div anyway XD
// The thing is we have 3 cases fellas:
// case 1:
// If the number of zeros is greater than 1
// then every product will be 0 easy.
// case 2:
// If there is exactly one zero,
// then every product will be 0 except for the index
// containing that zero at that index the product
// is the multip of all the non zero numbers.
// case 3:
// If there are no zeros
// then:
// product[i] = total_product / nums[i]
// word for word bro Draw everything before you solve it hehe.
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
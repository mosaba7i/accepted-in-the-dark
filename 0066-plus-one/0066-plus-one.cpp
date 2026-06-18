
vector<int> inc_digits(vector<int>& d)
{
    vector<int> d2;
    int i = 0;
    int nine = 0;
    int i_nine = 2;
    while (i < d.size())
    {
        
        if (*(d.end() - 1) == 9 && i == d.size() - 1)
        {
            nine++;
          
            while (  (d.end() - i_nine >= d.begin() ) && *(d.end() - i_nine) == 9)
            {
                nine++;
                i_nine++;
                d2.pop_back();
            }
            if ( !(d.end() - i_nine >= d.begin()))
                d2.push_back(1);
            else 
                {
                    d2.pop_back();
                    d2.push_back(*(d.end() - i_nine) + 1);
                }
            while (nine)
            {
                d2.push_back(0);
                nine--;
            }
            break ; 
        }
        if (i == d.size() - 1)
        {
             d2.push_back(*(d.begin() + i) + 1);
             break ;
        }
        d2.push_back(*(d.begin() + i));
        i++;

    }
    return(d2);
    
}
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        return(inc_digits(digits));
    }
};
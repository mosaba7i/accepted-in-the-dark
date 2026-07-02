// updated 2 -> optimized (used hashing + less code for sure XD)
class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> key;
       int sum = 0;
        while (n != 1 )
        {
            sum = 0;
            for(;n;n=n/10)
                sum += pow((n % 10),2);
             if (key.find(sum) != key.end())
                return(false);
            n = sum;
            key.insert(sum);
        }
        return(true);

    }
};
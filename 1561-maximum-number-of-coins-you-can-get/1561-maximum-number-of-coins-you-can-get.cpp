// updated - > instead of upoping and erasing which causes at the end o(n^2)
// we simply use two pointers method :)
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int me = 0;
        int i = 0;
        int j = piles.size() - 1;
        while(i < j)
        {
            j--;
            me += piles[j];
            j--;
            i++;
        }
        return(me);
    }
};
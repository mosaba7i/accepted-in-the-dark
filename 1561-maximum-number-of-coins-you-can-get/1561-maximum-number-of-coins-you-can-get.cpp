class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int me = 0;
        int i = 0;
        while(i < piles.size())
        {
            piles.pop_back();
            me += piles[piles.size()- 1];
            piles.pop_back();
            i++;
        }
        return(me);
    }
};
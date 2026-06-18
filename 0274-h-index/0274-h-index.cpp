class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count = 0;
        int s = citations.size();
        int i = 0;
        int j = 0;
        int k = 0;
        k = s;
        while (j < s)
        {
            count = 0;
            i = 0;
            while (i < s)
            {
                
                if (citations[i] >= k)
                    count++;
                if (count >= k)
                    return(k);
                i++;

            }
            j++;
            k--;
        }
        return(0);
    }
};
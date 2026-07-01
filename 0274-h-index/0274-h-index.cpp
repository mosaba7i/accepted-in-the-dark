//updated 2 - > optimized (used )
// BASICALLY THE TIME COMPX WAS O(N^2) NOT OPTIMAL
// used sort which is nlogn + n =~ nlogn which is better than n^2 for sure :)
class Solution {
public:
    int hIndex(vector<int>& citations) {
       sort(citations.begin(),citations.end());
       int s = citations.size();
       for(int i = 0 ; i < citations.size(); i++)
       {
            if (citations[i] >= s)
                return(s);
            s--;
       }
        return(s);
    }
};
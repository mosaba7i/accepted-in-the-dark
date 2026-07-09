class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count = 0;
        unordered_set <int> key1;
        unordered_set <int> key2;
        vector<int> com;
        for(int i = 0;i<A.size();i++)
        {
            key1.insert(A[i]);
            key2.insert(B[i]);
            if ( A[i] == B[i])
                count++;
            if (key1.count(B[i]) && A[i] != B[i])
                 count++;
            if (key2.count(A[i]) && A[i] != B[i])
                count++;
            com.push_back(count);
        }
        return(com);
    }
};
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> degree(matrix.size(),0);
        for(int i = 0; i < matrix.size();i++)
            for(int j = 0; j < matrix[i].size();j++)
                if(matrix[i][j])
                    degree[j]++;
        return(degree);
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i = 0;
        int s = tokens.size();
        vector<int> n;
        int num = 0;
        int sum = 0;
        if (s == 1)
            return (stoi(tokens[i]));
        while (i < s)
        {
            if (tokens[i][0] == '*')
            {
                sum = n[n.size()-1] * n[n.size()-2];
                n.pop_back();
                n.pop_back();
                n.push_back(sum);
            }
            else if (tokens[i][0] == '/')
            {
                sum = n[n.size()-2] / n[n.size()-1];
                n.pop_back();
                n.pop_back();
                n.push_back(sum);
            }
            else if (tokens[i][0] == '+')
            {
                sum = n[n.size()-1] + n[n.size()-2];
                n.pop_back();
                n.pop_back();
                n.push_back(sum);
            }
            else if ((tokens[i][0] == '-') && (!tokens[i][1]))
            {
                sum = n[n.size()-2] - n[n.size()-1];
                n.pop_back();
                n.pop_back();
                n.push_back(sum);
            }
            else
                n.push_back(stoi(tokens[i]));
            i++;
            
        }
        return(sum);
    }
};
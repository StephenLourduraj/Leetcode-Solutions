class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        int numRows = rowIndex + 1;
        vector<vector<int> > res;
        vector<int> temp;
        temp.push_back(1);
        res.push_back(temp);
        if (numRows == 1)
        {
            return temp;
        }
        temp.push_back(1);
        res.push_back(temp);
        int count = 2;
        while (count < numRows)
        {
            int n = res.size();
            int j = res[n - 1].size();
            vector<int> temp;
            temp.push_back(1);
            for (int i = 0; i < j - 1; i++)
            {
                temp.push_back(res[n - 1][i] + res[n - 1][i + 1]);
            }
            temp.push_back(1);
            res.push_back(temp);
            count++;
        }
        return res[numRows - 1];
    }
};
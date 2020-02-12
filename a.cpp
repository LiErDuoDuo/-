class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a=matrix[0].size();
        int b=matrix.size();
        vector<int> out;
        int x=0;
        int y=0;
        while(x<a && y<b)
        {
        for (int i=y;i<a;i++)
        {
            out.push_back(matrix[x][i]);
        }
        x++;
        for (int i=x;i<b;i++)
        {
            out.push_back(matrix[i][b-1]);
        }
        b--;
        for (int i=b-1;i>=y;i--)
        {
            out.push_back(matrix[a-1][i]);
        }
        a--;
        for (int i=a-1;i>=x;i--)
        {
            out.push_back(matrix[i][y]);
        }
        y++;
        }
        return out;
            
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows == 0) return res;
        res.push_back({1});

        for(int row=2;row<=numRows;row++){
            vector<int> temp;
            temp.push_back(1);
            vector<int> prev =res[row-2];
            for(int i=1;i<row-1;i++){
                temp.push_back(prev[i-1]+prev[i]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};
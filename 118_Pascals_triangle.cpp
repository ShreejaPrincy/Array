//Time Complexity	O(numRows²)
//Space Complexity	O(numRows²)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pt;
        
        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<row.size()-1;j++){
                row[j]=pt[i-1][j-1]+pt[i-1][j];
            }
            pt.push_back(row);
        }

        return pt;
    }
};

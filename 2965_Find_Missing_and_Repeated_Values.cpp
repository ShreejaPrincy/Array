//Time Complexity	O(n²)
//Space Complexity	O(1)
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        long long N=n*n;
        long long total=N*(N+1)/2;
        long long total2=N*(N+1)*(2*N+1)/6;
        long long org=0,org2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                org+=grid[i][j];
                org2+=grid[i][j]*grid[i][j];
            }
        }
        long long sum=total-org;
        long long diff=total2-org2;
        long long m=(sum+diff/sum)/2;
        long long r=m-sum;
        return {(int)r , (int)m};
    }
};

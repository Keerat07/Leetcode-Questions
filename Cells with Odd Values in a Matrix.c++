class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> vec(m,(vector<int>(n,0)));
        int rows=indices.size();
        for(int i=0;i<rows;i++){
            int row1=indices[i][0];
            int col=indices[i][1];
            int k=0;
            while(k<n){
                vec[row1][k]++;
                k++;
            }
            k=0;
            while(k<m){
                vec[k][col]++;
                k++;
            }
        }
        int tot=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]%2!=0){
                    tot++;
                }
            }
        }
        return tot;
    }
};

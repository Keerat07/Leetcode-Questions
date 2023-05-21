class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int n1=matrix[0].size();
        int count=0;
        vector<int> vec1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vec1.push_back(matrix[i][j]);
            }
        }
        sort(vec1.begin(),vec1.end());
        int key=n*n1;
        for(int i=0;i<key;i++){
            count++;
            if(k==count){
                return vec1[i];
            }
        }
        return 0;
    }
};

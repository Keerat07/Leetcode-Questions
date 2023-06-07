class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=profit.size();
        int labour=worker.size();
        int profit1=0;
        for(int i=0;i<labour;i++){
            int prof=0;
            for(int j=0;j<n;j++){
                if(worker[i]>=difficulty[j]){
                    if(profit[j]>prof){
                        prof=profit[j];
                    }
                }
            }
            profit1+=prof;
        }
        return profit1;
    }
};

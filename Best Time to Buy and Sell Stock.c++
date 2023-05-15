class Solution {
public:
    int max2(int a,int b){
        return a>b?a:b;
    }
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int max1=0;
    int max=0;
    for(int i=0;i<n;i++){
        int total=0;
        for(int j=i+1;j<n;j++){
            if(prices[j]>prices[i]){
                total=max2(total,prices[j]);
            }
        }
        total-=prices[i];
        max1=max2(total,max1);
        
    }
    return max1;
    }
};

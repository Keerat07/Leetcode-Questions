class Solution {
public:
    int rec1(vector<int>&coins,int amount,int n,int k){
        if(amount==0){
            return 1;
        }
        if(amount<0){
            return 0;
        }
        int b=0;
        while(k!=n){
            b+=rec1(coins,amount-coins[k],n,k);
            k++;
        }
        return b;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int a=rec1(coins,amount,n,0);
        return a;
    }
};

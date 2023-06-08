class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int n=bills.size();
       int arr[3];
       for(int i=0;i<3;i++){
           arr[i]=0;
       }
       for(int i=0;i<n;i++){
           if(bills[i]==5){
               arr[0]++;
               continue;
           }
           else{
               if(bills[i]==10){
                   arr[1]++;
               }
               if(bills[i]==20){
                   arr[2]++;
               }
               int change=bills[i]-5;
               while(change>=20 && arr[2]>0){
                   change-=20;
                   arr[2]--;
               }
               while(change>=10 && arr[1]>0){
                   change-=10;
                   arr[1]--;
               }
               while(change>=5 && arr[0]>0){
                   change-=5;
                   arr[0]--;
               }
               if(change!=0){
                   return false;
               }
           }
       }
       return true;
    }
};

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        for(int i=0;i<n;i++){
            int count=1;
            while(i<n-1 && arr[i]==arr[i+1]){
                count++;
                i++;
            }
            if(count>n/4){
                return arr[i-1];
            }
        }
        return 0;
    }
};

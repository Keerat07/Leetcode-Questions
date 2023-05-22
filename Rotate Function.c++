class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int n1=0;
        int prod1=INT_MIN;
        while(n1!=n){
            int key=nums[0];
            for(int i=0;i<n-1;i++){
                nums[i]=nums[i+1];
            }
            nums[n-1]=key;    
            int prod=0;
            for(int i=0;i<n;i++){
                prod+=(i*nums[i]);
            }
            if(prod>prod1){
                prod1=prod;
            }
            n1++;
        }
        return prod1;
    }
};

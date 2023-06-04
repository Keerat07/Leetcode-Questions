class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int k=1;
        if(n==1){
            return 1;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<=nums[i]){
                k=1;
            }
            else{
                k++;
                if(count<k){
                    count=k;
                }
            }
        }
        return count;
    }
};

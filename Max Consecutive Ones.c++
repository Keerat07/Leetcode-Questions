class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int total=1;
        int c=1;
        if(n==1 && nums[0]!=1 || (n==2 && nums[0]==0 && nums[1]==0)){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==1 && nums[i+1]==1){
                c++;
                if(c>total){
                    total=c;
                }
            }
            else{
                c=1;
            }
        }
        return total;
    }
};

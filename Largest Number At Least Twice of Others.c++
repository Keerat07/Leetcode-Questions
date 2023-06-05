class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        int index=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
        bool ans=true;
        for(int i=0;i<n;i++){
            if(i==index){
                continue;
            }
            if(nums[i]*2>nums[index]){
                ans=false;
                break;
            }
        }
        if(ans){
            return index;
        }
        return -1;
    }
};

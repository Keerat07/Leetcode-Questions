class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        bool ans=false;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int tot1=0,tot2=0;
            int start=i-1;
            while(start>=0){
                tot1+=nums[start];
                start--;
            }
            int end=i+1;
            while(end<n){
                tot2+=nums[end];
                end++;
            }
            if(tot1==tot2){
                return i;
            }
        }
        return -1;
    }
};

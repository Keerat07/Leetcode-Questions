class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int min=INT_MAX;
        long total=0;
        sort(nums.begin(),nums.end());
        int mid=n/2;
        int key=nums[mid];
        for(int i=0;i<n;i++){
            if(nums[i]>key){
                total+=nums[i]-key;
            }
            else{
                total+=key-nums[i];
            }
            
        }
        return total;
    }
};

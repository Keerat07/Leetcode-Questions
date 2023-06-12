class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int max1=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max1){
                max1=nums[i];
            }
        }
        int arr[max1+1];
        for(int i=0;i<=max1;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<=max1;i++){
            if(arr[i]>1){
                return i;
            }
        }
        return 0;
    }
};

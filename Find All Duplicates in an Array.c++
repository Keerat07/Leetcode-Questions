class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int max1=-1000;
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
        vector<int> vec1;
        for(int i=0;i<=max1;i++){
            if(arr[i]>1){
                vec1.push_back(i);
            }
        }
        return vec1;
    }
};

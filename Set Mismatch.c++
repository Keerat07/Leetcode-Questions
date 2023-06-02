class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1;
        // int max1=0;
        // for(int i=0;i<n;i++){
        //     if(max1<nums[i]){
        //         max1=nums[i];
        //     }
        // }
        int arr[n+1];
        for(int i=0;i<=n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(arr[i]>1){
                vec1.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==0){
                vec1.push_back(i);
            }
        }
        
        return vec1;
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        for(int i=0;i<=n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        vector<int> vec1;
        for(int i=1;i<=n;i++){
            if(arr[i]==0){
                vec1.push_back(i);
            }
        }
        return vec1;
    }
};

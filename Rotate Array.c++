class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> vec1;
        int n1=n-k;
        if(k>n){
            return;
        }
        for(int i=0;i<n;i++){
            vec1.push_back(nums[(i+n1)%n]);
        }
        for(int i=0;i<n;i++){
            nums[i]=vec1[i];
        }
    }
};

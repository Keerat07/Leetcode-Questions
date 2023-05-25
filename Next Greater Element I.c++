class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> vec1;
        for(int i=0;i<n1;i++){
            int ans=0;
            int key;
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    key=j;
                    break;
                }
            }
            for(int j=key;j<n2;j++){
                if(nums2[j]>nums1[i]){
                    vec1.push_back(nums2[j]);
                    ans=1;
                    break;
                }
            }
            if(ans==0){
                vec1.push_back(-1);
            }
        }
        return vec1;
    }
};

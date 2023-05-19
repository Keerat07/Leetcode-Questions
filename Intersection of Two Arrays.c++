class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> vec1;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    int n3=vec1.size();
                    int ans=1;
                    for(int l=0;l<n3;l++){
                        if(vec1[l]==nums1[i]){
                            ans=0;
                        }
                    }
                    if(ans){
                        vec1.push_back(nums1[i]);
                    }
                }
            }
        }
        return vec1;
    }
};

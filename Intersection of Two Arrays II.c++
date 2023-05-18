class Solution {
public:
    void remove(vector<int> &nums2,int index){
        nums2.erase(nums2.begin()+index);
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> vec1;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    vec1.push_back(nums1[i]);
                    remove(nums2,j);
                    n2--;
                    break;
                }
            }
        }
        return vec1;
    }
};

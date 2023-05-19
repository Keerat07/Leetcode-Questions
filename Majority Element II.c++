class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=n/3;
        vector<int> vec1;
        sort(nums.begin(),nums.end());
        int count1=1;
        for(int i=0;i<n;i++){            
            while((i+1)<n && nums[i]==nums[i+1] ){
                i++;
                count1++;
            }
            
            if(count1>count){
                vec1.push_back(nums[i]);
            }
            count1=1;
        }
        return vec1;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int x:nums){
            s.insert(x);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int current_element=nums[i];
            int count=0;
            int previous_element=nums[i]-1;
            if(s.find(previous_element)==s.end()){
                while(s.find(current_element)!=s.end()){
                    current_element++;
                    count++;
                }
            }
            ans=max(count,ans);
        }
        return ans;
    }
};

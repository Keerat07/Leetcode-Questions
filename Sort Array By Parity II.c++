class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0 && nums[i]%2!=0){
                int b=i;
                while(b<n){
                    if(b%2!=0 && nums[b]%2==0){
                        break;
                    }
                    b++;
                }
                int a=nums[i];
                nums[i]=nums[b];
                nums[b]=a;
            }
            if(i%2!=0 && nums[i]%2==0){
                int b=i;
                while(b<n){
                    if(b%2==0 && nums[b]%2!=0){
                        break;
                    }
                    b++;
                }
                int a=nums[i];
                nums[i]=nums[b];
                nums[b]=a;
            }
        }
        return nums;
    }
};

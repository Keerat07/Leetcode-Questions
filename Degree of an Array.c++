class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        max+=1;
        int arr[max];
        for(int i=0;i<max;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        int count=0;
        int number;
        for(int i=0;i<max;i++){
            if(arr[i]>=count){
                count=arr[i];
                number=i;
            }
        }
        int start=-1,end=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==number){
                if(start==-1){
                    start=i;
                    end=i;
                }
                else{
                    end=i;
                }
            }
        }
        return end-start+1;
    }
};

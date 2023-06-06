class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<int>> vec;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                vector<int>vec1;
                vec1.push_back(arr[i]);
                vec1.push_back(arr[j]);
                vec.push_back(vec1);                
            }
        }
        int n2=vec.size();
        vector<double>arr1;
        vector<int> vec1;
        for(int i=0;i<n2;i++){
            arr1.push_back((double)(vec[i][0])/(double)(vec[i][1]));
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<n2;i++){
            double tot=(double)(vec[i][0])/(double)(vec[i][1]);
            if(tot==arr1[k-1]){
                vec1.push_back(vec[i][0]);
                vec1.push_back(vec[i][1]);
                break;
            }
        }
        return vec1;
    }
};

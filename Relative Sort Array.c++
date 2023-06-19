class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        vector<int>vec1;
        vector<int>vec2;
        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(arr2[i]==arr1[j]){
                    vec1.push_back(arr1[j]);
                }
            }
        }
        int n3=vec1.size();
        for(int i=0;i<n1;i++){
            bool ans=false;
            for(int j=0;j<n3;j++){
                if(arr1[i]==vec1[j]){
                    ans=true;
                    break;
                }
            }
            if(ans==false){
                vec2.push_back(arr1[i]);
            }
        }
        sort(vec2.begin(),vec2.end());
        n3=vec2.size();
        for(int i=0;i<n3;i++){
            vec1.push_back(vec2[i]);
        }
        return vec1;
    }
};

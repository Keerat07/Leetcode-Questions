class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> vec1 {"qwertyuiop","asdfghjkl","zxcvbnm"};
        int n=words.size();
        vector<string> vec2;
        for(int i=0;i<n;i++){
            int n1=words[i].size();
            string newcase=words[i];
            transform(newcase.begin(),newcase.end(),newcase.begin(), ::tolower);
            for(int m=0;m<3;m++){
                int k=0;
                while(k<n1){
                    int ans=0;
                    for(int j=0;j<vec1[0].size();j++){
                        if(newcase[k]==vec1[m][j]){
                            k++;
                            ans=1;
                            break;
                        }  
                    }
                    if(ans==0){
                        break;
                    }
                }
                if(k==n1){
                    vec2.push_back(words[i]);
                }
            }
        }
        return vec2;
    }
};

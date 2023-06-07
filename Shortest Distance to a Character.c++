class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            int left=-1;
            int right=-1;
            int b=i;
            while(b>=0){
                if(s[b]==c){
                    left=b;
                    break;
                }
                b--;
            }
            b=i;
            while(b<n){
                if(s[b]==c){
                    right=b;
                    break;
                }
                b++;
            }
            if(left==-1){
                vec.push_back(abs(right-i));
            }
            else if(right==-1){
                vec.push_back(abs(left-i));
            }
            else{
                b=min(abs(left-i),abs(right-i));
                vec.push_back(abs(b));
            }
            
            
        }
        return vec;
    }
};

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x,y;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    x=i;
                    y=j;
                }
            }
        }
        int count=0;
        int indexB=-1;
        int indexP=-1;
        for(int i=0;i<x;i++){
            if(board[i][y]=='B'){
                indexB=i;
            }
            if(board[i][y]=='p'){
                indexP=i;
            }
        }
        if(indexB<indexP){
            count++;
        }
        int index=-1;
        for(int i=x+1;i<8;i++){
            if(board[i][y]=='B'){
                break;
            }
            if(board[i][y]=='p' && i>index){
                count++;
                break;
            }
        }
        indexP=-1;
        indexB=-1;
        for(int i=0;i<y;i++){
            if(board[x][i]=='B'){
                indexB=i;
            }
            if(board[x][i]=='p'){
                indexP=i;
            }
        }
        if(indexB<indexP){
            count++;
        }
        for(int i=y+1;i<8;i++){
            if(board[x][i]=='B'){
                index=i;
                break;
            }
            if(board[x][i]=='p' && i>index){
                count++;
                break;
            }
        }
        return count;
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            map<int,int>mpp;
            map<int,int>mpp2;
            for(int j=0;j<board[i].size();j++){
                if(isalnum(board[i][j])){
                    mpp[board[i][j]]++;
                    
                }
                if(mpp[board[i][j]]>1){
                        return false;
                    }
                if(isalnum(board[j][i])){
                    mpp2[board[j][i]]++;
                    
                }
                if(mpp2[board[j][i]]>1){
                    return false;
                }
            }
        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                map<int,int>mpp3;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(isalnum(board[i+k][j+l])){
                            mpp3[board[i+k][j+l]]++;
                        }
                        if(mpp3[board[i+k][j+l]]>1){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
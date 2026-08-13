class Solution {
public:

    bool check(vector<vector<char>>&board,string word,int i,int j,int m,int n,int idx){
        
        if(i<0||j<0||i>=m||j>=n||board[i][j]=='$'){
            return false;
        }

        if(board[i][j]!=word[idx]){
            return false;
        }
        
        if(idx==word.size()-1){
            return true;
        }

        char temp= board[i][j];
        board[i][j] = '$';

        if(check(board,word,i-1,j,m,n,idx+1)||
        check(board,word,i,j+1,m,n,idx+1)||
        check(board,word,i+1,j,m,n,idx+1)||
        check(board,word,i,j-1,m,n,idx+1)){
            return true;
        }

        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(check(board,word,i,j,m,n,0)==true) return true;
                }
            }
        }
        return false;
    }
};
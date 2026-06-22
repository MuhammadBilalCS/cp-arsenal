class Solution {
public:
bool isSafe(vector<string> &chessboard, int row, int col,int n){
    // horizontal loop
    for(int j=0; j<n;j++){
        if(chessboard[row][j]=='Q'){ return false;}
    }
     // vertical loop
    for(int j=0; j<n;j++){
        if(chessboard[j][col]=='Q'){ return false;}
    }
    // L_DIAG loop
    for(int i=row,j=col; i>=0&&j>=0; i--,j--){
        if(chessboard[i][j]=='Q'){ return false;}
    }
    // R_DIAG loop
    for(int i=row,j=col; i>=0&&j<n; i--,j++){
        if(chessboard[i][j]=='Q'){ return false;}
    }
    return true;
    
}
void nqueen(vector<string> &chessboard, int row, int n, vector<vector<string>> &ans){
            if(row==n){ans.push_back(chessboard);return;}
            for(int j=0; j<n;j++){
                if(isSafe(chessboard, row, j, n)){
                    chessboard[row][j]='Q';
                    nqueen(chessboard,row+1,n, ans);
                    chessboard[row][j]='.';
                }
            }
        }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>chessboard(n, string(n,'.'));
        vector<vector<string>> ans;     
        nqueen(chessboard, 0, n , ans);   
        return ans;
        
    }
};
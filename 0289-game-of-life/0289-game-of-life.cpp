class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> ans=board;
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                if(j-1>=0 && board[i][j-1]==1)
                    c++;
                if(j+1<m && board[i][j+1]==1)
                    c++;
                if(i-1>=0 && j-1>=0 && board[i-1][j-1]==1)
                    c++;
                if(i-1>=0 && board[i-1][j]==1)
                    c++;
                if(i-1>=0 && j+1<m && board[i-1][j+1]==1)
                    c++;
                if(i+1<n && j-1>=0 && board[i+1][j-1]==1)
                    c++;
                if(i+1<n && board[i+1][j]==1)
                    c++;
                if(i+1<n && j+1<m && board[i+1][j+1]==1)
                    c++;
                if((board[i][j]==1 && (c==2||c==3))||(board[i][j]==0 && c==3))
                    ans[i][j]=1;
                else
                    ans[i][j]=0;
            }
        }
        board=ans;
    }
};
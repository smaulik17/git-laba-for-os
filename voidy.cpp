void moveTile(vector<vector<int>>& board,int tile){
    for(int i=0;i<SIZE;++i) {
        for(int j=0;j<SIZE;++j){
            if(board[i][j]==tile){
                for(int k=0;k<SIZE;++k) {
                    for(int l=0;l<SIZE;++l){
                        if(board[k][l]==0){
                            if (canMove(k,l,i,j)){
                                swap(board[k][l],board[i][j]);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
}


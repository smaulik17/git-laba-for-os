#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE=4;

void displayBoard(const vector<vector<int>>&board){
    for(const auto& row:board) {
        for(const auto& tile:row){
            if(tile==0)
                cout<<"   ";
            else
                cout<<(tile<10? " " : "")<<tile<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canMove(int emptyRow,int emptyCol,int tileRow,int tileCol){
    return(abs(emptyRow-tileRow)+abs(emptyCol-tileCol)==1);
}

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

bool isSolved(const vector<vector<int>>&board){
    int count=1;
    for (int i=0;i<SIZE;++i) {
        for (int j=0;j<SIZE;++j){
            if(i==SIZE-1 && j==SIZE-1){
                return board[i][j]==0;
            }
            if (board[i][j]!=count++){
                return false;
            }
        }
    }
    return true;
}

void shuffleBoard(vector<vector<int>>& board) {
    vector<int> tiles;
    for (int i=0;i<SIZE*SIZE-1;++i){
        tiles.push_back(i+1);
    }
    tiles.push_back(0);
    random_shuffle(tiles.begin(),tiles.end());
    for(int i=0;i<SIZE;++i){
        for(int j=0;j<SIZE;++j){
            board[i][j]=tiles[i*SIZE+j];
        }
    }
}

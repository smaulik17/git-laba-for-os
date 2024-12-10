#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE=4;

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

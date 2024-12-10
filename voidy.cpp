#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE=4;



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

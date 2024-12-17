#include "gitlab.h"

int main(){
    vector<vector<int>>board(SIZE,vector<int>(SIZE,0));
    shuffleBoard(board);
    while(true){
        displayBoard(board);
        if (isSolved(board)){
            cout<<"Поздравляем! Вы выиграли!"<<endl;
            break;
        }
        cout<<"Введите номинал плитки, которую хотите переместить (или 0 для выхода): ";
        int tile;
        cin>>tile;
        if(tile==0){
            cout<<"Выход из игры."<<endl;
            break;
        }
        moveTile(board,tile);
    }

    return 0;
}

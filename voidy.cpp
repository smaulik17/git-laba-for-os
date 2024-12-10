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

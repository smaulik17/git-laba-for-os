#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE=4;


bool canMove(int emptyRow,int emptyCol,int tileRow,int tileCol){
    return(abs(emptyRow-tileRow)+abs(emptyCol-tileCol)==1);
}

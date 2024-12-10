
bool canMove(int emptyRow,int emptyCol,int tileRow,int tileCol){
    return(abs(emptyRow-tileRow)+abs(emptyCol-tileCol)==1);
}

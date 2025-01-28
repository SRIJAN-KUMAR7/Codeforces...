#include <bits/stdc++.h>
using namespace std;

int main() {
    char board[8][8];
    int fr = 0, fc = 0;
    for (int i = 0; i < 8; i++) {
        bool isfr = true;
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'W') {
                isfr = false;
            }
        }
        if (isfr) fr++;
    }

    for (int j = 0; j < 8; j++) {
        bool isfc = true;
        for (int i = 0; i < 8; i++) {
            if (board[i][j] == 'W') {
                isfc = false;
            }
        }
     if (isfc) fc++; 
    }
   int ts=0;
   if(fr==8){
    ts=8;
   }
   else{
    ts=fr+fc;
   }
   cout<<ts<<endl;
    return 0;
}

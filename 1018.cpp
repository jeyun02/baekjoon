#include <iostream>
using namespace std;

/** black : 1 , while : 0 */
bool** Board_Input(int m, int n){
   bool** board = new bool*[m];
   for (int i = 0; i < m; i++){
      board[i] = new bool[n];
      fill_n(board[i], n, false);
      for (int j = 0; j < n; j++) {
         char ch; 
         cin >> ch;
         if (ch =='B'){
            board[i][j] = true;
         }
         // cout << board[i][j];
      }
      // cout << endl;
   }
   return board;
}
/** Count the number of changes for the board to be Chess board whose left top is {White : 0 : false} */
int ChangeCount_0(int i, int j, bool** board){
   int changecount = 0;
   for ( int k = i; k < i + 8; k +=2 ){
      for ( int l = j; l < j + 8; l+=2){
         if(board[k][l] == true) changecount++;
      }
   }
   for ( int k = i+1; k < i + 8; k +=2 ){
      for ( int l = j+1; l < j + 8; l+=2){
         if(board[k][l] == true) changecount++;
      }
   }
   for ( int k = i+1; k < i + 8; k +=2 ){
      for ( int l = j; l < j + 8; l+=2){
         if(board[k][l] == false) changecount++;
      }
   }
   for ( int k = i; k < i + 8; k +=2 ){
      for ( int l = j+1; l < j + 8; l+=2){
         if(board[k][l] == false) changecount++;
      }
   }
   return changecount;
}
/** Count the number of changes for the board to be Chess board whose left top is {Black : 1 : True} */
int ChangeCount_1(int i, int j, bool** board){
   int changecount = 0;
   for ( int k = i; k < i + 8; k +=2 ){
      for ( int l = j; l < j + 8; l+=2){
         if(board[k][l] == false) changecount++;
      }
   }
   for ( int k = i+1; k < i + 8; k +=2 ){
      for ( int l = j+1; l < j + 8; l+=2){
         if(board[k][l] == false) changecount++;
      }
   }
   for ( int k = i+1; k < i + 8; k +=2 ){
      for ( int l = j; l < j + 8; l+=2){
         if(board[k][l] == true) changecount++;
      }
   }
   for ( int k = i; k < i + 8; k +=2 ){
      for ( int l = j+1; l < j + 8; l+=2){
         if(board[k][l] == true) changecount++;
      }
   }
   return changecount;
}

int main() {
   unsigned int m, n;
   cin >> m >> n;
   bool** board = Board_Input(m, n);
   int minchange = 32;
   for ( int i = 0; i < m - 7; i++){
      for ( int j = 0; j < n - 7; j++){
         minchange = min(minchange, min(ChangeCount_1(i, j, board), ChangeCount_0(i, j, board)));
      }
   }
   cout << minchange;
   return 0;
}
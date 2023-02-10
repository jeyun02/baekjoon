#include <iostream>
using namespace std;

int main(){
   int x[3];
   int y[3];
   int x_index =0;
   int y_index =0;
   for (int i=0; i<3; i++){
      cin >> x[i] >> y[i];
   }
    
   int new_x, new_y;
   if (x[1] == x[2])       new_x = x[0];
   else if (x[0] == x[2])  new_x = x[1];
   else                    new_x = x[2];
   
   if (y[1] == y[2])       new_y = y[0];
   else if (y[0] == y[2])  new_y = y[1];
   else                    new_y = y[2];

   cout << new_x <<" "<< new_y;
}
#include <iostream>
using namespace std;

int main(){
   int a = -1;
   int b = -1;

   while(true){
      if ( a>0 )              cout << "\n";
      cin >> a >> b;
      if( a == 0 && b == 0)   break;
      else{
         if( a % b == 0)      cout << "multiple";
         else if( b % a == 0) cout << "factor";
         else                 cout << "neither";
      }
   }
   return 0;
}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
   int t;
   cin >> t;
   for (int i =0; i<t; i++){
      int h, w, n;
      cin >> h >> w >> n;
      
      int flr = n % h;
      if (flr == 0) flr = h;

      //room 이 문제야
      int room; 
      if (w == 1) room = 1;
      else if (w == 2) room = ceil(((float)n / h));
      else room = ceil(((float)n / h));

      char address_str[5] = "\0\0\0\0";
      sprintf(address_str, "%d%02d", flr, room);
      printf("%d", atoi(address_str));
      if (i < t-1) printf("\n");  
   }
}
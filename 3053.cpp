// 택시 기하학하하하핫
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/** creating approximate value of pi.*/
long double creating_eucli_area(int radius){
   long double innersum = 0;
   for(int i = 1; i < 10000000; i++){
      if (i % 2 == 1) 
         innersum += (1 /(long double)(2*i - 1));
      else 
         innersum -= (1 /(long double)(2*i - 1));
   }
   return (4 * innersum) * pow(radius, 2);
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int radius;
   cin >> radius;

   long double eucli_area = creating_eucli_area(radius);
   double taxi_area = 2 * pow(radius, 2);
   
   // output up to 6 decimal places
   cout.fixed;
   cout.precision(6);
   
   cout << fixed << setprecision(6) << eucli_area << endl;
   cout << taxi_area; 

   return 0;
}
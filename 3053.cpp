// 택시 기하학하하하핫
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int radius;
   cin >> radius;

   long double eucli_area = (long double)M_PI * (long double)pow(radius, 2);
   double taxi_area = 2 * pow(radius, 2);
   
   // output up to 6 decimal places
   cout.fixed;
   cout.precision(6);
   
   cout << fixed << setprecision(6) << eucli_area << endl;
   cout << taxi_area; 

   return 0;
}
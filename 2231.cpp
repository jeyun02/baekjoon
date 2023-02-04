#include <iostream>
#include <cmath>
using namespace std;

int Digitsum(int digit)
{
   if (digit <10) return digit;
   return ((digit % 10) + Digitsum(digit/10));
}

int DigitGenerator(int n)
{
   if (n>100){
      int min = n / 10;
      for (int digit = min; digit < n; digit++){
         if (digit + Digitsum(digit) == n) return digit;
      }
      return 0;
   }   
   else {
      for (int digit = 1; digit < n; digit++){
         if (digit + Digitsum(digit) == n) return digit;
      }
      return 0;
   } 
}

int main() {
   int n;
   cin >> n;
   cout << DigitGenerator(n);
   return 0;
}
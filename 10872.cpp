#include <iostream>
using namespace std;
int Factorize(int n)
{
   if (n == 1 || n == 0) return 1;
   return n * Factorize(n-1);
}
int main() {
   unsigned int n;
   cin >> n;
   cout << Factorize(n);
   return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   long long N;
   cin >> N;
   double sol = sqrt((N - 0.75)/3) + 0.5;
   cout << ceil(sol);
}
#include <iostream>
#include <cmath>
using namespace std;

int N;

int main(){
   cin >> N;
   int arr[2*N];

   for(int i = 0; i < N; i++ ){
      cin >> arr[i] >> arr[i + N];
   }

   return 0;
}
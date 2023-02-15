#include <iostream>
#include <cmath>
using namespace std;

int N, K;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> N >> K;
   int unit[N];
   int count = 0;
   for( int i = 0; i < N; i++){
      cin >> unit[i];
   }
   for( int i = N-1; i >= 0; i--){
      if( K >= unit[i]){
         count += floor(K / unit[i]);
         K = K % unit[i];
      }
   }
   cout << count;
}
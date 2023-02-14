#include <iostream>
using namespace std;
#define MAX 102

int T;
int arr[MAX] = {0,1,1,1};
// int max_index;
int Padovan(int N){
   if (N > 3) {
      for( int i = 4; i <= N; i++ ){
         arr[i] = arr[i-2] + arr[i-3];
      }
   }
   return arr[N];
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> T;
   // max_index = 4;
   while(T--){
      int N;
      cin >> N;
      cout << Padovan(N)<< "\n";
      // max_index = N;
   }
}
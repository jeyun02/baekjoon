// 대칭 차집합
#include <iostream>

using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   // creating set A and set B
   int n_a, n_b;
   int count = 0;
   cin >> n_a >> n_b;
   int A[n_a];
   
   // input set A
   for (int i = 0; i < n_a; i++){
      cin >> A[i];
   }
   // int B[n_b];
   int input;
   int both = 0;
   int search_start_index = 0;
   // input set B and make A to the unique set of A and B.
   for (int i = 0; i < n_b; i++){
      // cin >> B[i];
      cin >> input;
      int j =0;
      while ( input >= A[j] && j < n_a){
         if( input == A[j] ){
            both++;
            break;
         }
         j++;
      }
   }

   // output
   cout << n_a + n_b - 2 * both;
   return 0;
}
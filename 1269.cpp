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

   // input set B and make A to the unique set of A and B.
   for (int i = 0; i < n_b; i++){
      int input;
      cin >> input;
      
      if( input < A[0] || input > A[-1] ) {
         count ++;
         continue;
      }
      for ( int j =0; j<n_a; j++){
         
      }
      int j = 0;
      while( input != A[j] && j < n_a) j++;
      count++;
      

   }

   // output
   cout << count;
   return 0;
}
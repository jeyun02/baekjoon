// 수 정렬하기 
#include <iostream>
using namespace std;

/** try 2
 * not using 
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
*/

int main(){

   int n;
   cin >> n;

   // counting the number of indexs.
   int count[10001] = {0};
   for (int i = 1; i <= n; i++){
      int input = 0;
      cin >> input;
      count[input]++;
   }
   //printing indexs as many as the value of the indexs.
   for (int i = 1; i <= 10000; i++){
      for(int j = 0; j < count[i]; j++){
         cout << i << endl;
      }
   }
   return 0;
}

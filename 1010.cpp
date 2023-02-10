#include <iostream>
using namespace std;
int T;
int combination(int n, int r){
   if(n == r || r == 0) 
      return 1; 
   else 
      return combination(n - 1, r - 1) + combination(n - 1, r);
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> T;
   while(T--){
      int a, b;
      cin >> a >> b;
      cout << combination(b, a) << endl;
   }
}
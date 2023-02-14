#include <iostream>
using namespace std;
int T;

long nCr(int n, int r)
{
   long output = 1;
   for(int i = 0; i < r; i++){
      output = output * (n - i);
      output = output / (1 + i);
   }
   return output;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> T;
   while(T--){
      int a, b;
      cin >> a >> b;
      cout << nCr(b, a) << "\n";
   }

   return 0;
}
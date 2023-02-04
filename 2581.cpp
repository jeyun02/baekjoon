#include <iostream>
using namespace std;

bool* Prime(int n){
   bool* isPrime = new bool[n+1];
   for (int i = 0; i <= n; i++) {
		isPrime[i] = true;
	}
   isPrime[0] = false;
   isPrime[1] = false;

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {//해당수가 소수라면, 출력하고 해당수를 제외한 배수들을 모두 제외
			// cout << i << " ";
			for (int j = i * 2; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}   
   return isPrime;

};

void output(int m, int n, bool* isPrime)
{
   int sum =0;
   int first_prime =0;
   bool isfirst = true;
   for (int i = m; i<=n ; i++){
      if(isPrime[i]){
         if(isfirst) {
            first_prime = i;
            isfirst = false;
         }
         sum += i;
      }
   }
   if (sum == 0) cout << -1;
   else cout << sum << "\n" << first_prime;
}

int main() {
   unsigned int m, n;
   cin >> m >> n;
   bool* isPrime = Prime(n);
   output(m, n, isPrime);
   return 0;
}
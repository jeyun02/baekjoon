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

int PrimeFactorize(int n)
{
   if (n==1) return 0;

   bool* isPrime = Prime(n);
   int i =2;
   while( n % i != 0) i++;
   int firstfactor = i;
   cout << firstfactor;
   if(!isPrime[n]) cout << "\n";

   PrimeFactorize(n / firstfactor);
   return n;
}

int main() {
   unsigned int n;
   cin >> n;
   PrimeFactorize(n);
   return 0;
}
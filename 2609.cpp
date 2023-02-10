#include <iostream>
using namespace std;

int A, B, G, L;

int gcd(int a, int b)
{
   int c;
	while(b)
	{
	   c = a % b;
		a = b;
		b = c;
	}
   return a;
}

int main(){
   cin >> A >> B;
   G = gcd(max(A,B),min(A,B));

   cout << G << "\n" << A * B / G;
}
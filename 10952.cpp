#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a,b;
   while (1) {
      scanf("%d %d",&a, &b);
      if (a == 0 & b == 0){
         return 0;
      }
		printf("%d\n", a+b);
	}
}

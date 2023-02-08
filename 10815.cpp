// 숫자 카드
#include <iostream>
#include <map>
using namespace std;
map<int, bool> m;
int N,M;
int num;

int main(){
   cin >> N;
	for (int i = 0; i < N; i++){
		cin >> num;
      m[num] = true;
	}

   cin >> M;
	for (int i = 0; i < M; i++){
		cin >> num;
      cout << m[num];
      if(i != M-1)
         cout << " "; 
	}
}
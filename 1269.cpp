#include <iostream>
#include <list>
using namespace std;

int main(){
   // creating set A and set B
   int n_a, n_b;
   cin >> n_a >> n_b;
   list<int> A;
   
   // input set A
   for (int i = 0; i < n_a; i++){
      int input;
      cin >> input;
      A.push_back(input);
   }

   // input set B and make A to the unique set of A and B.
   for (int i = 0; i < n_b; i++){
      int input;
      cin >> input;
      list<int>::iterator iter = A.begin();
      int before_size = A.size();
      A.remove(input); // making A-B
      if(before_size == A.size()){
         A.push_back(input); // making B-A
      }
   }

   // output
   cout << A.size();
   return 0;
}
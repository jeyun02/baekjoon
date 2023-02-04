#include <iostream>
#include <list>

using namespace std;

int main() {
   list<int> iList; 
   for(int i =1; i<31; i++){
      iList.push_back(i);
   }

   int student_id =0;

   for(int i =0; i<28; i++){
      // scanf("%d", &student_id);
      cin >> student_id;
      iList.remove(student_id);
   }

   for(auto loop : iList)
   {
      cout << loop << endl;
   }
   return 0;
}
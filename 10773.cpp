#include<iostream>
#include<stack>
 
using namespace std;
 
int main(void){
   int K;
   cin >> K;
   
   stack<int> st;
   int input;

   while(K--){
      cin >> input;
      if (input != 0){
         st.push(input);
      }
      else{
         st.pop();
      }
   }
   int st_size = st.size();
   int sum = 0;
   while(st.size() != 0){
      sum += st.top();
      st.pop();
   }
   cout << sum;
   return 0;
}
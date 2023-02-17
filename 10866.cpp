#include<iostream>
#include<string>
#include<deque>

using namespace std;
 
int main(void){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n;
   cin >> n;
   
   deque<int> deq; //int type의 queue 선언. 
   string str;

   for(int i=0; i<n; i++) {
      cin >> str;

      if (str == "push_front")
      { //push 명령어 일때. 
         int num;
         cin >> num;
         deq.push_front(num);
      } 
      else if (str == "push_back")
      { //push 명령어 일때. 
         int num;
         cin >> num;
         deq.push_back(num);
      } 

      else if (str == "pop_front") 
      {    //pop 명령어 일때. 
         if (!deq.empty()) 
         {
            cout << deq.front() << "\n";
            deq.pop_front();
         } 
         else
            cout << "-1" << "\n";
      } 
      else if (str == "pop_back") 
      {    //pop 명령어 일때. 
         if (!deq.empty()) 
         {
            cout << deq.back() << "\n";
            deq.pop_back();
         } 
         else
            cout << "-1" << "\n";
      } 

      else if (str == "size") 
      {        //size 명령어 일때. 
         cout << deq.size() << "\n";
      } 
      
      else if (str == "empty") 
      {    //empty 명령어 일때. 
         if (deq.empty()) 
            cout << "1" << "\n";
         else 
            cout << "0" << "\n";
      } 
      
      else if (str == "front") 
      {        //front 명령어 일때. 
         if (!deq.empty()) 
            cout << deq.front() << "\n";
         else 
            cout << "-1" << "\n";
      }
      
      else if (str == "back") 
      {        //back 명령어 일때. 
         if (!deq.empty()) 
            cout << deq.back() << "\n";
         else 
            cout << "-1" << "\n";
      }
   }
   return 0;
}

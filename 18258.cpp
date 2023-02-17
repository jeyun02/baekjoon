#include<iostream>
#include<string>
#include<queue>

using namespace std;
 
int main(void){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n;
   cin >> n;
   
   queue<int> qu; //int type의 queue 선언. 
   string str;

   for(int i=0; i<n; i++) {
      cin >> str;

      if (str == "push")
      { //push 명령어 일때. 
         int num;
         cin >> num;
         qu.push(num);
      } 

      else if (str == "pop") 
      {    //pop 명령어 일때. 
         if (!qu.empty()) 
         {
            cout << qu.front() << endl;
            qu.pop();
         } 
         else
            cout << "-1" << endl;
      } 
      
      else if (str == "size") 
      {        //size 명령어 일때. 
         cout << qu.size() << endl;
      } 
      
      else if (str == "empty") 
      {    //empty 명령어 일때. 
         if (qu.empty()) 
            cout << "1" << endl;
         else 
            cout << "0" << endl;
      } 
      
      else if (str == "front") 
      {        //front 명령어 일때. 
         if (!qu.empty()) 
            cout << qu.front() << endl;
         else 
            cout << "-1" << endl;
      }
      
      else if (str == "back") 
      {        //back 명령어 일때. 
         if (!qu.empty()) 
            cout << qu.back() << endl;
         else 
            cout << "-1" << endl;
      }
   }
   return 0;
}

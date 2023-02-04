#include <iostream>
using namespace std;

int main() 
{
   int n, m;
   cin >> n >> m;

   // int **mat1 = (int**)malloc(sizeof(int*) * n);
   int **mat1;
   mat1 = new int*[n];
   for (int i=0; i<n; i++){
      mat1[i] = new int[m];
      fill_n(mat1[i], m, 0);
      for(int j=0; j<m;j++){
         cin >> mat1[i][j];
      }
   }
   // int **mat1;
   // mat1 = new int*[n];
   for (int i=0; i<n; i++){
      // mat1[n] = new int[m];
      for(int j=0; j<m;j++){
         int add;
         cin >> add;
         mat1[i][j] += add;
         cout << mat1[i][j];
         if(j <m-1) cout << " ";
      }
      cout << endl;
   }
}

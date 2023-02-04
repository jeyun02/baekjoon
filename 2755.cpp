#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

/**
   A+: 4.3, A0: 4.0, A-: 3.7
   B+: 3.3, B0: 3.0, B-: 2.7
   C+: 2.3, C0: 2.0, C-: 1.7
   D+: 1.3, D0: 1.0, D-: 0.7
   F: 0.0 */
double convert_grade(const char* grade)
{
   map<string, double> grade_map;

   grade_map["A+"] = 4.3;
   grade_map["A0"] = 4.0;
   grade_map["A-"] = 3.7;
   grade_map["B+"] = 3.3;
   grade_map["B0"] = 3.0;
   grade_map["B-"] = 2.7;
   grade_map["C+"] = 2.3;
   grade_map["C0"] = 2.0;
   grade_map["C-"] = 1.7;
   grade_map["D+"] = 1.3;
   grade_map["D0"] = 1.0;
   grade_map["D-"] = 0.7;
   grade_map["F"] = 0.0;
   
   return grade_map[grade];
}

int main() {
   int N;
   cin >> N;

   int total_credit =0;
   double total_grade = 0.0;

   for (int i=0; i<N; i++){
      string subject;
      int credit = 0;
      string grade;

      cin >> subject >> credit >> grade;

      total_credit += credit;
      const char * char_grade = grade.c_str();
      total_grade += credit * convert_grade(char_grade);
      
   }
   // cout << total_credit << endl;
   // cout << total_grade << endl;
   printf("%0.2lf", round((total_grade / total_credit) * 100) / 100);
}
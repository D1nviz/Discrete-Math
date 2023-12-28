#include <bits/stdc++.h>
#define int long long
using namespace std;

int calculateResult(int a, int b, int c, int good_and_excellent, int satisfactory_and_excellent, int satisfactory_and_good, int all_grades) {
  int only_satisfactory = a - satisfactory_and_good - satisfactory_and_excellent + all_grades;
  int only_good = b - satisfactory_and_good - good_and_excellent + all_grades;
  int only_excellent = c - satisfactory_and_excellent - good_and_excellent + all_grades;
  int result = 100 * only_excellent + 10 * only_good + only_satisfactory;
  return result;
}
void processGrades() {
  int a, b, c, good_and_excellent, satisfactory_and_excellent, satisfactory_and_good, all_grades;
  cout << "enter 1 mark :";
  cin >> a;
  cout << "enter 2 mark :";
  cin >> b;
  cout << "enter 3 mark :";
  cin >> c;
  cout << "enter 4 value :";
  cin >> good_and_excellent;
  cout << "enter 5 value :";
  cin >> satisfactory_and_excellent;
  cout << "enter 6 value :";
  cin >> satisfactory_and_good;
  cout << "enter 7 all :";
  cin >> all_grades;
  int result = calculateResult(a, b, c, good_and_excellent, satisfactory_and_excellent, satisfactory_and_good, all_grades);
  cout << endl << "The result is: " << result << endl;
}
// Оцінки за сесію

long long BinomialCoefficient(int n, int k){
  if (k < 0 || k > n) return 0;
  int smaller = k < n - k ? k : n - k; long long result = 1;
  for (int i = 0; i < smaller; i++){
    result *= (n - i);
    result /= (i + 1);
  } return result;
}
// Гуртожиток + Клас

void calculateNoLanguage() {
  int total_tourists, english_speakers, french_speakers, german_speakers;
  int english_and_french, french_and_german, english_and_german, all_three_languages;
  cout << "Enter all tourists :";  cin >> total_tourists;
  cout << "Enter 1 language :";  cin >> english_speakers;
  cout << "Enter 2 language :";  cin >> french_speakers;
  cout << "Enter 3 language :";  cin >> german_speakers;
  cout << "Enter 4 value :";  cin >> english_and_french;
  cout << "Enter 5 value :";  cin >> french_and_german;
  cout << "Enter 6 value :";  cin >> english_and_german;
  cout << "Enter tourists all language :";  cin >> all_three_languages;
  int at_least_one_language = english_speakers + french_speakers + german_speakers
                              - english_and_french - french_and_german - english_and_german
                              + all_three_languages;
  int no_language = total_tourists - at_least_one_language;
  cout << endl << "Answer is: " << no_language << endl;
}
// Туристи

int32_t main(){
  //  processGrades();
  /// Оцінки за сесію

  calculateNoLanguage();
  /// Туристи

//  cout << "Enter n :"; int n; cin >> n;
//  cout << "Enter k :"; int k; cin >> k;
//  long long result = BinomialCoefficient(n, k);
//  cout << "C(" << n << ", " << k << ") = " << result + 1 << endl;
  /// Гуртожиток + Клас (3 Фрейм)
}

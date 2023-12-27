#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int a, b, c, good_and_excellent, satisfactory_and_excellent, satisfactory_and_good, all_grades;
  cout << "enter 1 mark ."; cin >> a;
  cout << "enter 2 mark ."; cin >> b;
  cout << "enter 3 mark ."; cin >> c;
  cout << "enter 4 value ."; cin >> good_and_excellent;
  cout << "enter 5 value ."; cin >> satisfactory_and_excellent;
  cout << "enter 6 value ."; cin >> satisfactory_and_good;
  cout << "enter 7 all ."; cin >> all_grades;

  int only_satisfactory = a - satisfactory_and_good - satisfactory_and_excellent + all_grades;
  int only_good = b - satisfactory_and_good - good_and_excellent + all_grades;
  int only_excellent = c - satisfactory_and_excellent - good_and_excellent + all_grades;

  int result = 100 * only_excellent + 10 * only_good + only_satisfactory;

  cout << endl << "The result is: " << result << endl;
}

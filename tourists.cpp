#include <bits/stdc++.h>
#define int long long
using namespace std;

long long BinomialCoefficient(int n, int k){
    if (k < 0 || k > n) return 0;
    int smaller = k < n - k ? k : n - k; long long result = 1;
    for (int i = 0; i < smaller; i++){
        result *= (n - i);
        result /= (i + 1);
    } return result;
}

int32_t main(){
    cout << "Введіть значення n: ";
    int n; cin >> n;
    cout << "Введіть значення k: ";
    int k; cin >> k;
    long long result = BinomialCoefficient(n, k);
    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") = " << result + 1 << endl;
}

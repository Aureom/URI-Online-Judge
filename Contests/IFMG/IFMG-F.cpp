#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // O codigo roda 3x mais rapido, mas não posso utilizar a biblioteca stdio
    cin.tie(nullptr);

    int factorial;
    cin >> factorial;

    if(factorial == 1) cout << 1 << endl;

    long long digits = floor(factorial * log10(factorial / M_E) + log10(2 * M_PI * factorial) / 2.0) + 1;

    cout << digits << endl;
}
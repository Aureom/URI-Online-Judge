//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // O codigo roda 3x mais rapido, mas não posso utilizar a biblioteca stdio

    int a;
    long long b;
    cin >> a >> b;
    cout << (a % b) << endl;
    return(0);
}
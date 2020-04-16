//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

unsigned int factorial(int fac){
    if(fac == 0) return 1;
    return fac * factorial(fac - 1);
}

int main() {
    ios::sync_with_stdio(false);

    int i;
    cin >> i;

    cout << factorial(i) << endl;
}
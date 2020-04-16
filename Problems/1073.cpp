//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

long long powLong(int x){
    return x * x;
}

int main() {
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    for (int i = 2; i <= x; i += 2) {
        cout << i << "^2 = " << powLong(i) << endl;
    }
}
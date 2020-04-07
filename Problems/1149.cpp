//
// Created by kaioa on 06/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int a, b, total = 0;
    cin >> a >> b;

    while(b <= 0){
        cin >> b;
    }

    for (int i = 0; i < b; ++i) {
        total += a + i;
    }
    cout << total << endl;
}
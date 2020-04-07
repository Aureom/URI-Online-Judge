//
// Created by kaioa on 06/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int cases, x, y, total;
    cin >> cases;

    while(cases--){
        total = 0;
        cin >> x >> y;

        x % 2 != 0 ? total += x : total += ++x;

        for (int i = 0; i < y - 1; ++i) {
            x += 2;
            total += x;
        }

        cout << total << endl;
    }
}
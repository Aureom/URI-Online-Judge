//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int r1, x1, y1, r2, x2, y2; //1 = caçador, 2 = flor
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        float distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        r1 - distance >= r2 ? cout << "RICO" << endl : cout << "MORTO" << endl;
    }
}
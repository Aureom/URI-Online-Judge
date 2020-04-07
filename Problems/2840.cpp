//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int radius, gas;
    cin >> radius >> gas;
    double volume = (4.0/3) * 3.1415 * (radius*radius*radius);
    cout << (int) (gas / volume) << endl;
}
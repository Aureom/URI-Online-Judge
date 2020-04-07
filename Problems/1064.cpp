//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    float totalPositives = 0, positives = 0, holder;
    for (int i = 0; i < 6; ++i) {
        cin >> holder;
        if(holder > 0) {
            positives++;
            totalPositives += holder;
        }
    }

    cout << positives << " valores positivos" << endl;
    cout << fixed << setprecision(1) << (totalPositives / positives) << endl;
}
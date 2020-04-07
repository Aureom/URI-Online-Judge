//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    float holder;
    for (int i = 0; i < 100; ++i) {
        cin >> holder;
        if(10 >= holder) cout << "A[" << i << "] = " << fixed << setprecision(1) << holder << endl;
    }

}
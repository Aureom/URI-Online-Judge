//
// Created by kaioa on 06/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int cases, num, lowest, pos;
    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        cin >> num;
        if(i == 0) lowest = num;
        if(num < lowest) {
            pos = i;
            lowest = num;
        }
    }

    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << pos << endl;
}
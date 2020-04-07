//
// Created by kaioa on 06/04/2020.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int degraus, altura, comprimento, largura;
    while(cin >> degraus){
        cin >> altura >> comprimento >> largura;
        cout << fixed << setprecision(4) << (degraus * sqrt(comprimento*comprimento + altura*altura) * largura) / 10000.0 << endl;
    }
}
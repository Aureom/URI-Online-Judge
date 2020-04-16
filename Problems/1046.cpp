//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;
    if (y < x){
        cout << "O JOGO DUROU " << (24 - x + y) << " HORA(S)" << endl;
    }else if(x == y){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << (y - x) << " HORA(S)" << endl;
    }
}
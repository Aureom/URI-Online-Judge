//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int i;
    while(cin >> i){
        if(i == 0) break;
        for (int j = 1; j <= i; ++j) {
            if(j == 1) cout << j;
            else cout << ' ' << j;
        }
        cout << endl;
    }
}
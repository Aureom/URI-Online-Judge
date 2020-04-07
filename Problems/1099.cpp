//
// Created by kaioa on 06/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int cases, a, b, odd;
    cin >> cases;

    while(cases--){
        odd = 0;
        cin >> a >> b;
        if(a < b) {
            a += 1;
            for (;a < b; ++a) {
                if(a % 2 != 0) odd += a;
            }
        }else{
            b += 1;
            for (;b < a; ++b) {
                if(b % 2 != 0) odd += b;
            }
        }
        cout << odd << endl;
    }
}
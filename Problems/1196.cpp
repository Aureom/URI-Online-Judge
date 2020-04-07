//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char keyboard[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    ios::sync_with_stdio(false);

    string line;
    while (getline(cin, line)){
        for (char& c : line) {
            for (int i = 0; i < 48; ++i) {
                if (c == keyboard[i]) {
                    cout << keyboard[i - 1];
                    break;
                } else if (c == ' ') {
                    cout << ' ';
                    break;
                } else if (c == '\n') {
                    cout << '\n';
                    break;
                }
            }
        }
        cout << endl;
    }

}
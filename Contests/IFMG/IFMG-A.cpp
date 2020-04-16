#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // O codigo roda 3x mais rapido, mas não posso utilizar a biblioteca stdio

    int cases;
    cin >> cases;
    cin.ignore();
    while(cases--){
        string line;
        getline(cin, line);

        bool q = false, j = false, k = false, a = false;
        for (char& c : line) {
            if(q && j && k && a) break;
            if(c == 'Q') q = true;
            if(c == 'J') j = true;
            if(c == 'K') k = true;
            if(c == 'A') a = true;
        }

        if(q && j && k && a) cout << "Aaah muleke" << endl;
        else cout << "Ooo raca viu" << endl;
    }
}
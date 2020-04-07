//
// Created by kaioa on 06/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string line;
    getline(cin, line);
    for (char& c : line) {
        if(c == '.' || c == '-') {
            cout << endl;
        }else{
            cout << c;
        }
    }
    cout << endl;
}
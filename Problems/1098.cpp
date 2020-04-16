//
// Created by kaioa on 10/04/2020.
//

#include <iostream>

using namespace std;

int main() {
    for (float i = 0; i <= 2.1; i += 0.2) {
        cout << "I=" << i << " J=" << (i + 1.0) << endl;
        cout << "I=" << i << " J=" << (i + 2.0) << endl;
        cout << "I=" << i << " J=" << (i + 3.0) << endl;
    }
}
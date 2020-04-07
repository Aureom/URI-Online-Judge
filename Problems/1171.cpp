//
// Created by kaioa on 06/04/2020.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int cases;
    cin >> cases;

    map<int, int> numbers;
    int num;
    while(cases--){
        cin >> num;
        numbers[num]++;
    }

    for (auto const& map : numbers) {
        cout << map.first << " aparece " << map.second << " vez(es)" << endl;
    }
}
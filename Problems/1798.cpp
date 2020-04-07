//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <vector>

using namespace std;

struct pipe{
    int length, price;
};

int main() {
    ios::sync_with_stdio(false);

    int cases, size, length, price;
    cin >> cases >> size;

    vector<pipe> pipes;
    while(cases--){
        cin >> length >> price;
        pipes.push_back(pipe{length, price});
    }


    for (int i = 0; i < pipes.size(); ++i) {

    }
}
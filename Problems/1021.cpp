//
// Created by kaioa on 04/04/2020.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float check(float money, float div){
    cout << (int) (money / div) << " " << ((div <= 1.00) ? "moeda" : "nota") << "(s) de R$ " << fixed << setprecision(2) << setfill('0') << div << endl;
    return fmod(money, div);
}

int main() {
    ios::sync_with_stdio(false);

    float money;
    cin >> money; money += 0.001;
    cout << "NOTAS:" << endl;
    money = check(money, 100);
    money = check(money, 50);
    money = check(money, 20);
    money = check(money, 10);
    money = check(money, 5);
    money = check(money, 2);
    cout << "MOEDAS:" << endl;
    money = check(money, 1);
    money = check(money, 0.5);
    money = check(money, 0.25);
    money = check(money, 0.10);
    money = check(money, 0.05);
    check(money, 0.01);

}
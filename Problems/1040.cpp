//
// Created by kaioa on 08/04/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, d, total, sub; // 2, 3, 4 e 1
    cin >> a >> b >> c >> d;
    total = (a*2 + b*3 + c*4 + d) / 10;

    cout << "Media: " << fixed << setprecision(1) << total << endl;
    if(6.9 < total){
        cout << "Aluno aprovado." << endl;
    }else if(5.0 > total){
        cout << "Aluno reprovado." << endl;
    }else{
        cout << "Aluno em exame." << endl;
        cin >> sub;
        cout << "Nota do exame: " << fixed << setprecision(1) << sub << endl;
        (sub + total) / 2 >= 5.0 ? cout << "Aluno aprovado." << endl : cout << "Aluno reprovado." << endl;
        cout << "Media final: " << fixed << setprecision(1) << (sub + total) / 2 << endl;
    }
}
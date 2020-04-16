#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int dataEntregue, dataLimite;
   cin >> dataEntregue >> dataLimite;
   if(dataEntregue > dataLimite) {
      cout << "Eu odeio a professora!" << endl;
      return 0;
   }
   if(dataEntregue <= (dataLimite - 3)){
      cout << "Muito bem! Apresenta antes do Natal!" << endl;
   }else{
      cout << "Parece o trabalho do meu filho!" << endl;
      if(dataEntregue + 2 < 24) cout << "TCC Apresentado!" << endl;
      else cout << "Fail! Entao eh nataaaaal!" << endl;
   }
}

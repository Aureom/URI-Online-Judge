#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int x, altura, diametro, galhos;
   cin >> x;
   while (x--){
      cin >> altura >> diametro >> galhos;
      if(altura >= 200 && altura <= 300 && diametro >= 50 && galhos >= 150) cout << "Sim" << endl;
      else cout << "Nao" << endl;
   }
   
}

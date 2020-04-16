#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   string line;
   while(getline(cin, line)){
      if(line == "esquerda") cout << "ingles" << endl;
      else if(line == "direita") cout << "frances" << endl;
      else if(line == "nenhuma") cout << "portugues" << endl;
      else if(line == "as duas") cout << "caiu" << endl;
   }
}

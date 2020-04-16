#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int x, c = 0, b = 0;
   string name;
   char gender;
   cin >> x;
   while (x--){
      cin >> name >> gender;
      if(gender == 'M') c++;
      else b++;
   }
   
   cout << c << " carrinhos" << endl;
   cout << b << " bonecas" << endl;
}

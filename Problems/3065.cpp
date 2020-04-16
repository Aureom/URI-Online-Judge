#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int x, count = 1;; 
   while(true){
      cin >> x;
      if(x == 0) break;

      int total; cin >> total;
      for (int i = 1; i < x; i++){
         char sig; cin >> sig;
         int num; cin >> num;
         if(sig == '-') total -= num; 
         else total += num;
      }

      cout << "Teste " << count << endl;
      cout << total << endl;
      if(count != 0) cout << endl;
      count++; 
   }
}
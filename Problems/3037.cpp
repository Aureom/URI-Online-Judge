#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int x, p, d;
   cin >> x;
   while(x--){
      int j = 0, m = 0;
      for (int i = 0; i < 6; i++){
         cin >> p >> d;
         if(i < 3){
            j += p*d;
         }else{
            m += p*d;
         }
      }
      cout << (j > m ? "JOAO" : "MARIA") << endl;
   }
}

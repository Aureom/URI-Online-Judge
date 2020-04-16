#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int x, n, m;
   cin >> x;
   while(x--){
      cin >> n >> m;
      cout << floor(log10(pow(n, m))) + 1 << endl;
   }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int n, x, f, total = 0;
   cin >> n >> x >> f;
   vector<int> a(n);
   for (int i = 0; i < n; i++) cin >> a[i];
   for (int i = 0; i < n; i++){
      for (int j = i + 1; j < n; j++){
         if(a[i] + a[j] >= x && a[i] + a[j] <= f) total++;
      }
   }
   
   cout << total << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int m, f, f1, rest = 0; cin >> m >> f >> f1;
   rest = m - (f + f1);
   if(rest < f) rest = f;
   if(rest < f1) rest = f1;
   cout << rest << endl;
}
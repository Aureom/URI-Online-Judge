#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   string line;
   getline(cin, line);

   for(char& c : line){
      if(c == ',') cout << endl;
      else cout << c;
   }
   cout << endl;
}

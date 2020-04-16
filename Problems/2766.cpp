#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   string name;
   for (int i = 0; i < 10; i++){
      cin >> name;
      if(i == 2 || i == 6 || i == 8){
         cout << name << endl;
      }
   }
   
}

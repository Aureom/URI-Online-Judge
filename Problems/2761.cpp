#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

	int i;
	float f;
	char c;
	char s[50];

	scanf("%d %f %c %[^\n]", &i, &f, &c, s);

	printf("%d%f%c%s\n", i, f, c, s);
	printf("%d\t%f\t%c\t%s\n", i, f, c, s);
	printf("%10d%10f%10c%10s\n", i, f, c, s);
}

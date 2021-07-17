#include<bits/stdc++.h>
#include"bigint.h"
using namespace std;
Bigint operator+(Bigint &a, Bigint &b) {
	Bigint c;
	int len = max(a.len, b.len);
	for (int i = 0; i < len; i++)
		c[i] += a[i] + b[i];
	c.flatten(len + 1);
	return c;
}
Bigint operator*(Bigint &a, int b) {
	Bigint c;
	int len = a.len;
	for (int i = 1; i <= len; i++)
		c[i] = a[i] * b;
	c.flatten(len + 11);
	return c;
}
int main() {
	Bigint ans(0), fac(1);
	int m;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		fac = fac * i;
		ans = ans + fac;
	}
	ans.print();
	return 0;
}


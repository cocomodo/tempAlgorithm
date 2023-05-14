#include <bits/stdc++.h>
using namespace std;

int n;
int a[5005];
int d[5005];
int mod = 1'000'000;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	n = s.size();
	for (int i = 1; i <= n; i++)
		a[i] = s[i - 1] - '0';
	d[0] = 1; // 이렇게 경우의 수의 문제의 경우, 아무것도 없는 경우 같은 경우는 한가지가 된다
	for (int i = 1; i <= n; i++) {
		if (a[i] > 0)
			d[i] = (d[i] + d[i - 1]) % mod;
		int x = a[i - 1] * 10 + a[i];
		if (x >= 10 && x <= 26)
			d[i] = (d[i] + d[i - 2]) % mod;
	}
	cout << d[n];
}
#include <bits/stdc++.h>
using namespace std;

string s; //처음에 주어지는 수를 스트링으로 받아서 각각의 원소에 접근하자.
int a[5005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	int i = 1;
	for (auto c : s) {
		a[i] = c - '0';
		i++;
	}
	
	for (auto c:a) {
		cout << c << ' ';
	}
		

}
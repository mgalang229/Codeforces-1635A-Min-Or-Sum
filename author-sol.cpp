#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	int ans = 0;
	// apply: a[i] | a[j] = (a[i] | a[j]) | 0
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans |= a;
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	vector<int> a(n);
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	// apply the OR operation to all the elements
	// make the remaining (N - 1) elements to 0
	// by doing this: a[i] | a[j] = (a[i] | a[j]) | 0
	// in every step, we are replacing elements with 0
	long long new_sum = 0;
	for (int i = 0; i < 30; i++) {
		bool checker = false;
		for (int j = 0; j < n; j++) {
			checker |= (a[j] & (1 << i));
		}
		if (checker) {
			new_sum += (1 << i);
		}
	}
	cout << min(sum, new_sum) << '\n';
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

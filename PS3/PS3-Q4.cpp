#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector < long long > arr(n), left(n + 1), right(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	left[0] = 0;
	left[1] = arr[0];
	right[n] = 0;
	right[n - 1] = arr[n - 1];
	for (int i = 1; i < n; i++) {
		left[i + 1] = __gcd(left[i], arr[i]);
	}
	right[0] = left[n];
	for (int i = n - 1; i >= 1; i--) {
		right[i - 1] = __gcd(right[i], arr[i]);
	}
	long long ans = max(left[n], right[0]);
	for (int i = 1; i < n; i++) {
		ans = max(ans, __gcd(left[i], right[i]));
	}
	cout << ans << '\n';
	return 0;
}

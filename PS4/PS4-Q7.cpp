#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, x;
	cin >> n >> x;
	vi w(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	vector < ii > dp(1 << n);
	dp[0] = {1, 0};
	for (int mask = 1; mask < 1 << n; mask++) {
		ii best = {INT_MAX, INT_MAX};
		for (int i = 0; i < n; i++) {
			if (!((1 << i) & mask)) {
				continue;
			}
			ii res = dp[mask ^ (1 << i)];
			if (res.second + w[i] <= x) {
				res.second += w[i];
			} else {
				res.first += 1;
				res.second = w[i];
			}
			best = min(best, res);
		}
		dp[mask] = best;
	}
	cout << dp[(1 << n) - 1].first;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()

const int MOD = 1e9 + 7;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int sum = n * (n + 1) / 2;
	if (sum % 2) {
		cout << "0\n";
		return 0;
	} else {
		int req = sum / 2;
		vector < vi > dp(n, vi(req + 1, 0));
		dp[0][0] = 1;
		for (int i = 1; i < n; i++) {
			for (int j = 0; j <= req; j++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= i) {
					(dp[i][j] += dp[i - 1][j - i]) %= MOD;
				}
			}
		}
		cout << dp[n - 1][req] << "\n";
	}
    return 0;
}

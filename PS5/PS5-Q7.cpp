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
	int h, w;
	cin >> h >> w;
	vector < string > a(h);
	vector < vi > dp(h, vi(w, 0));
	for (int i = 0; i < h; i++) {
		cin >> a[i];
	}
	dp[0][0] = 1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (i + 1 < h && a[i + 1][j] != '#') {
				(dp[i + 1][j] += dp[i][j]) %= MOD;
			}
			if (j + 1 < w && a[i][j + 1] != '#') {
				(dp[i][j + 1] += dp[i][j]) %= MOD;
			}
		}
	}
	cout << dp[h - 1][w - 1] << "\n";
    return 0;
}

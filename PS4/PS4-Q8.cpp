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
	int a, b;
	cin >> a >> b;
	vector < vi > dp(a + 1, vi(b + 1, 1e9));
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			if (i == j) {
				dp[i][j] = 0;
			} else {
				for (int k = 1; k < i; k++) {
					dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
				}
				for (int k = 1; k < j; k++) {
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
				}
			}
		}
	}
	cout << dp[a][b] << "\n";
    return 0;
}

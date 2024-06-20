#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector < double > p(3010);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	vector < vector < double > > dp(3030, vector < double >(3030));
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i + 1][j] += dp[i][j] * (1 - p[i]);
			dp[i + 1][j + 1] += dp[i][j] * p[i];
		}
	}
	double ans = 0;
	for (int i = 0; i <= n; i++) {
		if (n - i < i) {
			ans += dp[n][i];
		}
	}
	printf("%.10f\n", ans);
    return 0;
}

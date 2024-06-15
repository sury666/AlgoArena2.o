#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

const int MAXN = 1e5 + 5;
ll dp[MAXN];
map < int, int > freq;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, mx = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > mx) {
			mx = x;
		}
		freq[x]++;
	}
	dp[0] = 0;
	dp[1] = freq[1];
	for (int i = 2; i <= mx; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + (ll) i * freq[i]);
	}
	cout << dp[mx] << "\n";
    return 0;
}

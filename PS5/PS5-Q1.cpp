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
	vi price(n), pages(n);
	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> pages[i];
	}
	vi dp(x + 1, 0);
	for (int i = 0; i < n; i++) {
        for (int j = x; j > 0; j--) {
            if (price[i] <= j) {
            	dp[j] = max(dp[j], pages[i] + dp[j - price[i]]);
			}
        }
    }
	cout << dp[x] << "\n";
    return 0;
}

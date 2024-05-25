#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, ans = 1;
		cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < 20; i++) {
			int p = 0;
			for (int j = 0;j < n; j++) {
				if ((a[j] >> i) & 1) {
					ans = max(ans, j - p + 1);
					p = j + 1;
				}
			}
			if (p) {
				ans = max(ans, n + 1 - p);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

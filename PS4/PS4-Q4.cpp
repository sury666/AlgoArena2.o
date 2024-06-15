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
	ll n;
	int k;
	cin >> n >> k;
	ll ans = n;
	vector < ll > a(k);
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	for (int mask = 0; mask < 1 << k; mask++) {
		vector < ll > subset;
		for (int i = 0; i < k; i++) {
			if (mask & 1 << i) {
				subset.pb(a[i]);
			}
		}
		ll product = 1;
		for (int i = 0; i < subset.size(); i++) {
			if(product > n / subset[i]) {
                product = n + 1;
                break;
            }
			product *= subset[i];
		}
		if (subset.size() % 2) {
			ans += n / product;
		} else {
			ans -= n / product;
		}
	}
	cout << ans << "\n";
    return 0;
}

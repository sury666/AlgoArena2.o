#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

vi lis(const vi & a) {
    int n = a.size();
    vector <ll> dp(n, (ll)1e18);
    vi l(n);
    for (int i = 0; i < n; i++) {
        auto pos = lower_bound(all(dp), a[i]);
        *pos = a[i];
        l[i] = pos - dp.begin();
    }
    return l;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vi l = lis(a);
		vi reva(a.rbegin(), a.rend());
        for (int i = 0; i < n; i++) {
            reva[i] = -reva[i];
        }
        vi r = lis(reva);
        int m = *max_element(all(l));
        vi ans;
        for (int i = 0; i < n; i++) {
            if (l[i] + r[n - i - 1] == m) {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
	}
    return 0;
}

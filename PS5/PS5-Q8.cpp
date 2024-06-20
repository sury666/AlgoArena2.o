#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()

int f (int n) {
	int out = n / 15;
	n %= 15;
	out += n / 6;
	n %= 6;
	out += n / 3;
	n %= 3;
	out += n;
	return out;
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
		int ans = f(n);
		if (n >= 10) {
			if (n < 20) {
				ans = min(f(n), f(n - 10) + 1);
			} else {
				ans = min({f(n), f(n - 10) + 1, f(n - 20) + 2});
			}
		}
		cout << ans << "\n";
	}
    return 0;
}

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
	int t;
	cin >> t;
	while (t--) {
		int n, leftest = -1;
		cin >> n;
		while (n) {
			leftest++;
			n /= 2;
		}
		cout << (1 << leftest) - 1 << "\n";
	}
    return 0;
}

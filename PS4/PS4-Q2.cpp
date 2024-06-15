#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

const int N = 2e5 + 10;
char x[N], y[N];
void solve() {
	int n;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++) {
		if (y[i] == 'C' && x[i] != 'C') {
			cout << "No\n";
			return;
		}    
	}
	for (int i = 0; i < n; i++) {
		if (y[i] != 'C') {
			int j = i + 1;
			while (j < n && y[j] != 'C') {
				j++;
			}
			int nea = count(y + i, y + j, 'A') - count(x + i, x + j, 'A');
			if (nea < 0) {
				cout << "No\n";
				return;
			}
			for (int k = i; k < j; k++) {
				if (x[k] == 'C') {
					x[k] = (nea ? 'A' : 'B');
					if (nea) {
						nea--;
					}
				}
			}
			for (int k = i, prex = 0, prey = 0; k < j; k++) {
				prex += (x[k] == 'A' ? 1 : -1);
				prey += (y[k] == 'A' ? 1 : -1);
				if (prex < prey) {
					cout << "No\n";
					return;
				}
			}
			i = j;
		}
	}	
	cout << "Yes\n";
	return;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}

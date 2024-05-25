#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

void setIO(string s) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
	setIO("paintbarn");
	int n, k, ans = 0;
	cin >> n >> k;
	vector < vi > plane(1001, vi (1001, 0));
	while (n--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		plane[x1][y1]++;
		plane[x1][y2]--;
		plane[x2][y1]--;
		plane[x2][y2]++;
	}
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++) {
			if (i > 0) {
				plane[i][j] += plane[i - 1][j]; 
			}
			if (j > 0) {
				plane[i][j] += plane[i][j - 1];
			}
			if (i * j > 0) {
				plane[i][j] -= plane[i - 1][j - 1];
			}
			if (plane[i][j] == k) {
				ans++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}

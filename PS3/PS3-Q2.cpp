#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 
int nxt() {
    int x;
    cin >> x;
    return x;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int t = nxt();
	while (t--) {
		int n = nxt(), ans = 0;
		vi arr(n), left(n), right(n);
		for (int i = 0; i < n; i++) {
			arr[i] = nxt();
		}
		left[0] = arr[0];
		right[0] = arr[0];
		for (int i = 1; i < n; i++) {
        left[i] = max(left[i - 1], arr[i] + i);
        right[i] = arr[i] - i;
    	}
    	for (int i = n - 2; i >= 0; i--) {
        	right[i] = max(right[i], right[i + 1]);
	    }
    	for (int i = 1; i < n - 1; i++) {
        	ans = max(ans, arr[i] + left[i - 1] + right[i + 1]);
    	}
		cout << ans << '\n';
	}
	return 0;
}

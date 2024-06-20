#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()

bool comp (pair < ii, int > a, pair < ii, int > b) {
	return a.first.second < b.first.second;
}

int find(const vector < pair < ii, int > > & a, int ind) {
    int l = 0, h = ind - 1;
    while(l <= h) {
        int mid = (l + h) / 2;
        if (a[mid].first.second < a[ind].first.first) {
            if(a[mid + 1].first.second < a[ind].first.first) {
				l = mid + 1;
			} else {
            	return mid;
			}
        } else {
        	h = mid - 1;
		}
    }
    return -1;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector < pair < ii, int > > a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first.first >> a[i].first.second >> a[i].second;
	}
	sort(all(a), comp);
	vector < ll > dp(n);
	dp[0] = (ll) a[0].second;
	for(int i = 1; i < n; i++) {
        ll temp = a[i].second;
		int search = find(a, i); 
        if(search != -1) {
        	temp += dp[search];
		}
        dp[i] = max(dp[i - 1], temp);
    }
    cout << dp[n - 1] << "\n";
    return 0;
}

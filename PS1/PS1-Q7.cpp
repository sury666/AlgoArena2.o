#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for (typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
int nxt() {
    int x;
    cin >> x;
    return x;
}
 
int main() {
	long long n = nxt(), ans = 0;
    vector < long long > p;
    for (long long i = 0; i < n; i++) {
        p.pb(nxt());
    }
    sort(all(p));
    long long med = p[n / 2];
    if (med - floor(med) > ceil(med) - med) {
        med = ceil(med);
    } else {
        med = floor(med);
    }
    for (long long i = 0; i < n; i++) {
        ans += abs(p[i] - med);
    }
    cout << ans << endl;
 	return 0;
}
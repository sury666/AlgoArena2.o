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
    int t = nxt();
    while (t--) {
        int n = nxt();
        ll ans = 0, b = 0;
        string a;
        cin >> a;
        map < ll, ll > c;
        d[0] = 1;
        for (int i = 0; i < n; i++) {
            b += a[i] - '0';
            ll x = b - i - 1;
            if (c.find(x) == c.end()) {
                c[x] = 0;
            }
            c[x] += 1;
            ans += c[x] - 1;
        }
        cout << ans << endl;
    }
    return 0;
}

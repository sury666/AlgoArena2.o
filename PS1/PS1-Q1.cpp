#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
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
	int n = nxt(), m = nxt(), d = nxt(), ans = 0, i = 0, j = 0;
    vi req, apartment;
    for (int i = 0; i < n; i++) {
        req.pb(nxt());
    }
    for (int i = 0; i < m; i++) {
        apartment.pb(nxt());
    }
    sort(all(req));
    sort(all(apartment));
    while (i < n && j < m) {
        if (abs(req[i] - apartment[j]) <= d) {
            ans++;
            i++;
            j++;
        } else {
            if (req[i] < apartment[j]) {
                i++;
            } else {
                j++;
            }
        }
    }
    cout << ans << endl;
 	return 0;
}
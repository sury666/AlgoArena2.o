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
	int n = nxt(), x = nxt(), ans = 0;
    deque < int > a;
    for (int i = 0; i < n; i++) {
        a.pb(nxt());
    }
    sort(all(a));
    while (a.size()) {
        while (a.size() > 1 && a.front() + a.back() > x) {
            ans++;
            a.pop_back();
        }
        if (a.size() == 1) {
            ans++;
            break;
        } else {
            ans++;
            a.pop_back();
            a.pop_front();
        }
    }
    cout << ans << endl;
 	return 0;
}
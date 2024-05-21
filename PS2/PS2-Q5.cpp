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
 
const int MOD = 1e9 + 7;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n = nxt(), sum = 0, now = 1;
	while (now <= n) {
		sum = (sum + n / now * ((((n / (n / now) - now + 1) % MOD) * ((now + n / (n / now)) % MOD) % MOD) *
	        500000004 % MOD)) % MOD;
		now = n / (n / now) + 1;
	}
	cout << sum << '\n';
}
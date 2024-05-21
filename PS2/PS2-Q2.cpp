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

const int MOD = 1000000007;
 
ll calPow(ll base, ll exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base % MOD;
    ll temp = calPow(base, exponent / 2);
    if (exponent % 2 == 0) {
        return (temp * temp) % MOD;
    }
    else {
        return (((temp * temp) % MOD) * base) % MOD;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = nxt();
    while (n--) {
		ll a = nxt(), b = nxt(), c = nxt();
        cout << calPow(a, calPow(b, c, MOD - 1), MOD) << "\n";
    }
	return 0
}
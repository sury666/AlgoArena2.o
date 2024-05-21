#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
 
int nxt() {
    int x;
    cin >> x;
    return x;
}
 
const long long MOD = 1e9 + 7;
long long expo(long long base, long long pow) {
	long long ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % MOD;
		base = base * base % MOD;
		pow >>= 1;
	}
	return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = nxt();
	vector < long long > p(100001), k(100001);
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> k[i];
	}
	long long div_cnt = 1, div_sum = 1, div_prod = 1, div_cnt2 = 1;
	for (int i = 0; i < n; i++) {
		div_cnt = div_cnt * (k[i] + 1) % MOD;
		div_sum = div_sum * (expo(p[i], k[i] + 1) - 1) % MOD *
		          expo(p[i] - 1, MOD - 2) % MOD;
		div_prod = expo(div_prod, k[i] + 1) *
		           expo(expo(p[i], (k[i] * (k[i] + 1) / 2)), div_cnt2) % MOD;
		div_cnt2 = div_cnt2 * (k[i] + 1) % (MOD - 1);
	}
	cout << div_cnt << ' ' << div_sum << ' ' << div_prod;
    return 0;
}
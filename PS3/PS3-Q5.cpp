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
	int n = nxt(), m = nxt();
	vi salt(n);
	for (int i = 0; i < n; i++) {
		salt[i] = nxt();
	}
	for (int i = 0; i < n - 1; i++) {
		salt[i + 1] = max(salt[i + 1], salt[i] - m);
	}
	for (int i = n - 1; i > 0; i--) {
		salt[i - 1] = max(salt[i - 1], salt[i] - m);
	}
	for (int i = 0; i < n; i++) {
		cout << salt[i] << ' ';
	}
	return 0;
}

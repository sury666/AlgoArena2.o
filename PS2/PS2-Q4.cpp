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
 
const int MAX_VAL = 1e6;
vector < int > occ_num(MAX_VAL + 1);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = nxt();
	for (int i = 0; i < n; i++){
		occ_num[nxt()]++;
	}
	for (int gcd = MAX_VAL; gcd > 0; gcd--) {
		int div = 0;
		for (int j = gcd; j <= MAX_VAL; j += gcd) {
			div += occ_num[j];
		}
		if (div >= 2) {
			cout << gcd << endl;
			break;
		}
	}
    return 0;
}
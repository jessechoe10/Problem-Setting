#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using vl = vector<ll>;
 
#define forn(i, n) for(ll i = 0; i < n; i++)
 
const ll MAXN = 100, MOD = 1e9 + 7;
 
ll dp[MAXN + 1][(1 << 17)];
 
int main(){
	ll n, x; cin >> n >> x; 
	vl a(n); 
	forn(i, n){
		cin >> a[i];
	}
	dp[0][0] = 1;
	for(ll i = 1; i <= n; i++){
		forn(j, (1 << 17)){
			dp[i][j] = dp[i - 1][j];
			dp[i][j] += dp[i - 1][a[i - 1] ^ j];
			dp[i][j] %= MOD;
		}
	}
	ll res = 0;
	for(ll i = x + 1; i < (1 << 17); i++){
		res += dp[n][i];	
		res %= MOD;
	}
	cout << res << endl;
}

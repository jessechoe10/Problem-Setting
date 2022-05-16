#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;

#define forn(i, n) for(ll i = 0; i < n; i++)

const ll MAXN = 25, MAXS = 5000, INF = 1e18, MOD = 1e9 + 7;

ll dp[MAXN + 1][MAXN + 1][MAXS + 1];

ll binpow(ll a, ll b){
	ll res = 1;
	while(b){
		if(b & 1){
			res *= a;
			res %= MOD;
		}
		a *= a; a %= MOD;
		b >>= 1;
	}
	return res;
}

ll interest(ll p, ll r, ll t){
	return (p * binpow(3, r * t)) % MOD;
}

int main(){
	ll n, k; cin >> n >> k;
	vl p(n);
	forn(i, n) cin >> p[i];
	forn(i, MAXN + 1){
		forn(j, MAXN + 1){
			forn(l, MAXS + 1){
				dp[i][j][l] = INF;
			}
		}
	}
	dp[0][0][0] = 0;
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= n; j++){
			for(ll l = 1; l <= MAXS; l++){
				for(ll x = 1; x <= k; x++){
					if(i - x >= 0 && l - p[i - 1] >= 0){
						dp[i][j][l] = min(dp[i][j][l], dp[i - x][j - 1][l - p[i - 1]] + interest(p[i - 1], l / 100, j));
					}
				}
			}
		}
	}
	ll res = INF;
	for(ll i = n - k + 1; i <= n; i++){
		for(ll j = 1; j <= n; j++){
			for(ll l = 1; l <= MAXS; l++){
				res = min(res, dp[i][j][l]);
			}
		}
	}
	cout << res << endl;
}
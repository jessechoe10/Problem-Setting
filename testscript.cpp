#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define forn(i, n) for(ll i = 0; i < n; i++)

int main(){
	freopen("test.out", "w", stdout);
	srand(time(0));
	ll n = 200000, m = 200000;
	cout << n << " " << m << endl;
	forn(i, m){
		ll a = rand() % n, b = rand() % n;
		cout << a + 1 << " " << b + 1 << endl;
	}
}

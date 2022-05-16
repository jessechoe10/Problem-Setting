#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;
using ll = long long;

#define forn(i, n) for(ll i = 0; i < n; i++)

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int mxn = atoi(argv[1]), mxk = atoi(argv[2]);
	ll n = rnd.next(1, mxn);
	cout << n << " " << rnd.next(1, mxk) << endl;
	forn(i, n){
		cout << rnd.next(1, mxk);
		if(i < n - 1) cout << " ";
	}
	cout << endl;
}
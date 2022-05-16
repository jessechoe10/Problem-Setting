#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;
using ll = long long;

#define forn(i, n) for(ll i = 0; i < n; i++)

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int maxn = 25, maxp = atoi(argv[1]);
    int n = rnd.next(1, maxn);
    int k = min(n, rnd.next(1, 10));
    cout << n << " " << k << endl;
    forn(i, n){
        cout << rnd.next(1, maxp);
        if(i < n - 1) cout << " ";
    }
    cout << endl;
}
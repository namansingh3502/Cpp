#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

#define ar array<int, 2>
#define pii pair<int, int>
#define pb push_back
#define vt vector
#define For(i, n) for (int i = 0; i < n; i++)
#define Rev(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, n) for (int i = 1; i <= n; i++)
#define REV(i, n) for (int i = n; i >= 1; i--)
#define Rep(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define ll long long

void solve(){

	ll n,k;
	cin>>n>>k;

	ll val = k/n;
	
	if( k == 1 )cout<<1<<endl;
	else if( val == 0 ) cout<<2<<endl;
	else{
		if( k%n != 0 ) val++;
		cout<<val<<endl;
	}

}

int main(){

	int test=1;
	cin>>test;

	while( test-- )
		solve();

	return 0;
}
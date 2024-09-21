#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vector<lli> (m))
#define vpii vector<pair<lli,lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}
lli n,m;
vi v(n);
bool ok(lli h){
	lli ans = 0;
	for(lli i =0;i<n;++i){
        if(v[i] >= h)
		ans+=v[i]-h;
	}
	return ans>=m;
}
void solve(){
    cin >> n >> m;
    v.resize(n);
    fr(i,n)cin >> v[i];
    
    lli lo=0,hi=1e9,mid;
    while((hi-lo) > 1){
    	mid = (hi+lo)/2;
    	if(ok(mid)){
    		lo = mid;
    	}else{
    		hi = mid-1;
    	}
    }
    if(ok(hi)){
    	cout << hi << "\n";
    }else{
    	cout << lo << "\n";
    }
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
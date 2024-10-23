#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli,lli>
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
const lli MOD = 1e9 + 7;
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

lli n,t;
vi v;
lli check(lli mid){
	lli t_product = 0;
	fr(i,n){
		t_product+=mid/v[i];
	}
	
	if(t_product>=t)return 1;
	return 0;
}
void solve(){
	cin >> n >> t;
	v.resize(n);
	lli sum = 0;
	fr(i,n)cin >> v[i],sum+=v[i];
	
	sort(all(v));
	lli lo=1,hi=t*v[0],ans=-1;
	while(lo<=hi){
		lli mid = (lo+hi)/2;
		if(check(mid) == 1){
			ans = mid;
			hi = mid-1;
		}else{
			lo = mid+1;
		}
	}
	cout << ans << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}
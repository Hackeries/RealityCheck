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

lli check(lli mid){
	
}
void solve(){
    lli n,m,k;
    cin >> n >> m >> k;
    vi v(n),v2(m);
    // v.resize(n),v2.resize(m);
    fr(i,n)cin >> v[i];
    fr(i,m)cin >> v2[i];
    sort(all(v));
    sort(all(v2));
    
    lli lo = 0,hi = 0,ans = 0;
    while(lo<n && hi<m){
    	if(abs(v[lo]-v2[hi]) <= k){
    		ans++;lo++;hi++;
    	}else if(v[lo]>v2[hi]){
            hi++;
    	}else{
            lo++;
        }
    }
    cout << ans << "\n";
    
    // for(auto x:v)cout << x << " ";
    //     cout << "\n";
    // for(auto x:v)cout << x << " ";
    
    
    
    // while(lo<=hi){
    // 	lli mid = (lo+hi)/2;
    	
    // 	if(check(mid)){
    // 		ans = mid;
    // 		hi = mid-1;
    // 	}else{
    // 		lo = mid+1;
    // 	}
    // }
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
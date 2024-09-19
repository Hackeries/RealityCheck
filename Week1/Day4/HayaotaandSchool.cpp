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
 
void solve(){
    lli n;cin >> n;
    vi v(n);fr(i,n)cin >> v[i];
    
    vi even,odd;
    
    fr(i,n){
        if(v[i]&1)odd.pb(i+1);
        else even.pb(i+1);
    }
    
    if (!odd.size()) {
        cout << "NO\n";
        return;
    }
    
    if (even.size() == 1 && n == 3) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    if (odd.size() > 2)
    cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
    else cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
}
 
signed main(){
    fastIO;
    lli t=1;
    cin >> t;
 
    while(t--){
        solve();
    }
}
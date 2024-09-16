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

vi primeFactors(lli n){
    vi ok;
    for(lli i =2;i*i<=n;++i){
        if(n%i == 0){
            ok.pb(i);
            if(n/i != i){
                ok.pb(n/i);
            }
        }
    }
    sort(all(ok));
    return ok;
}
bool isPrime(lli n){
    if(n<2)return false;
    
    for(lli i =2;i*i<=n;++i){
        if(n%i == 0)return false;
    }
    return true;
}
void solve(){
    lli n,k;cin >> n >> k;
    vi okk = primeFactors(n);
    vi prime;
    for(lli i=0;i<okk.size();++i){
        if(isPrime(okk[i])){
            prime.pb(okk[i]);
        }
    }
    
    for(auto x:prime)cout << x << " ";
        cout << "\n";
}

// void solve(){
//     lli n,k;cin >> n >> k;
//     lli ok = binpow(2,k-1);
    
//     if(n%ok == 0){
//     	for(lli i=0;i<k-1;++i){
//     		cout << 2 << " ";
//     	}
//     	cout << n/ok << "\n";
//     }else{
//     	cout << -1 << "\n";
//     }
// }

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
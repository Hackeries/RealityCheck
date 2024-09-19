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
    lli n,m;cin >> n >> m;
    vector<string>v(m);fr(i,m)cin >> v[i];
    lli ans = 0;;
    fr(i,n){
        lli one = 0;
        lli zero = 0;
        lli ques = 0;
        fr(j,m){
            if(v[j][i] == '0')zero++;
            else if(v[j][i] == '1')one++;
            else ques++;
        }
        lli ok = abs(one-zero);
        lli okk = one+zero+ques;
        lli mini = min(one,zero);
        lli maxi = max(one,zero);
        if(ok > ques){
            mini+=ques;
            ans+=maxi*mini;
        }else{
            ans+=(okk/2)*((okk+1)/2);
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
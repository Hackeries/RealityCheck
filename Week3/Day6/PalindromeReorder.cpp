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

void solve(){
    string s;cin >> s;
    map<char,lli>mp;
    
    for(auto x:s){
        mp[x]++;
    }
    lli cnt = 0;
    for(auto x:mp){
        if(x.second & 1){
            cnt++;
        }
    }
    if(cnt>1){
        cout << "NO SOLUTION\n";
        return;
    }
    
    string ans = "";
    char c = '#';
    for(auto x:mp){
        for(lli i =0;i<x.second/2;++i){
            ans.pb(x.first);
        }
        
        if(x.second & 1)c = x.first;
    }
    s = ans;
    if(c!='#')s+=c;
    reverse(all(ans));
    s+=ans;
    cout << s << "\n";
    
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
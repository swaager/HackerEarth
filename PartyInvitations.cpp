// Author: EUNIX-TRIX

//    g++ -std=c++17 a.cpp -o a  --To compile
//    ./a  --To execute
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const ll INF=1e6+7,mod=1e9+7;
vector<ll> v[INF],A;
ll vis[INF],sz[INF],fact[INF],invf[INF],id[INF];

ll ipow(ll x, ll p){
    ll ret = 1, piv = x;
    while(p){
        if(p&1) ret *= piv;
        piv *= piv;
        ret %= mod;
        piv %= mod;
        p >>= 1;
    }
    return ret;
}

ll root(ll x){
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(ll x, ll y){
    ll p = root(x);
    ll q = root(y);
    id[q] = id[p];
}

ll dfs(ll n){
    if(vis[n]) return sz[n];
    vis[n]=1;
    if(v[n].size()==0) return sz[n]=1;
    ll k=0;
    for(ll i=0;i<v[n].size();i++){
        k+=dfs(v[n][i]);
    }
    sz[n]=k+1;
    return sz[n];
}

void initialize(){
    for(ll i = 0;i < INF;++i)
        id[i] = i;
}

int main(){
    IOS;
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    fact[0] = invf[0] = 1;
    for(ll i=1; i<INF; i++){
        fact[i] = fact[i-1] * i % mod;
        invf[i] = ipow(fact[i], mod - 2);
    }
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        initialize();
        while(m--){
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            if(root(a) != root(b))
                union1(a, b);
        }
        memset(vis,0,sizeof vis);
        memset(sz,1,sizeof sz);
        
        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                A.push_back(dfs(root(i)));
            }
        }
        ll ans = 1;
        for(ll i=1;i<=n;i++){
            ans = ans*fact[sz[i]-1]%mod;
            for(ll k=0;k<v[i].size();k++)
                ans = ans*invf[sz[v[i][k]]]%mod;
        }
        ans = ans*fact[accumulate(A.begin(),A.end(),0)]%mod;
        for(ll i=0;i<A.size();i++) ans = ans*invf[A[i]]%mod;
        cout<<ans%mod<<endl;
        
        for(ll i=0;i<=n;i++) v[i].clear();
        A.clear();
    }
    return 0;
}
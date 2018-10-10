//Link of the problem :- https://www.hackerearth.com/problem/algorithm/construct-the-set-7a9a6be2/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,d;
    cin>>n>>m>>d;
    ll b[m],a[m],i;
    for(i=0;i<m;i++){
        cin>>a[i];
        b[i]=a[i];
        
    }
    sort(b,b+m);
    set<ll> s;
    for(i=0;i<n;i++)s.insert(b[i]);
    for(i=0;i<m;i++){
        if(s.find(a[i])!=s.end()){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}

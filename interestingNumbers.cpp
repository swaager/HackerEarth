#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p,z;
    unsigned long long int l,r;
    cin>>p>>l>>r>>z;
    vector<int>v(z);
    for(int i=0;i<z;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int count=0;
    for(int i=l;i<=r;i++){
        if(i%p==0){
            int x=i,t,n=0,k=0;
            while(x!=0){
                t=x%10;
                n++;
                x=x/10;
                if(binary_search(v.begin(), v.end(),t))
                    k++;
                else
                    break;
            }
            if(n==k)
                count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}

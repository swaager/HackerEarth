#include <bits/stdc++.h>

using namespace std;

long max(long a,long b){
    if(a>b)return a;
    else return b;
}

int main() {
	long n,m;
	cin>>n>>m;
	long aa[n][n],i,k;
	
	for(i=0;i<n;i++){
	    for(k=0;k<n;k++){
	        aa[i][k]=0;
	    }
	}
	
	long p,a,b,c,d;
	for(i=0;i<m;i++){
	    cin>>p>>a>>b>>c>>d;
	    a--;b--;c--;d--;
	    for(k=a;k<=c;k++){
	        aa[k][b]^=p;
	    }
	    if(d+1<n){
	        for(k=a;k<=c;k++)aa[k][d+1]^=p;
	    }
	}
	
	for(i=0;i<n;i++){
	    for(k=1;k<n;k++){
	        aa[i][k]^=aa[i][k-1];
	    }
	}
	
	for(i=0;i<n;i++){
	    for(k=0;k<n;k++){
	        cout<<aa[i][k]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}

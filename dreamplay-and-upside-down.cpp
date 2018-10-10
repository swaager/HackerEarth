#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.size(),i,k,c1=0,c2,c3,min=6000;
    
    if(l==1){
        cout<<"0";
        return 0;
    }
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i])c1++;
    }
    int v,d;
    if(l%2==0)d=l/2-1;
    else d=l/2;
    for(i=l/2;i<l;i++){
        v=0;
        c2=0;
        c3=0;
        for(k=1;;k++){
            if(i-v<0||i+k>l-1)break;
            if(s[i-v]!=s[i+k])c2++;
            v++;
        }
        c2=c2+l-(2*v);
        v=0;
        for(k=1;;k++){
            if(i-k<0||i+k>l-1)break;
            if(s[i-k]!=s[i+k])c3++;
            v++;
        }
        c3=c3+l-(2*v);
        c3--;
        if(c3<c2)c2=c3;
        if(c2<min)min=c2;
    }
    if(c1<min)cout<<c1;
    else cout<<min;
    return 0;
}

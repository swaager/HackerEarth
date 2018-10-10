#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u')ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

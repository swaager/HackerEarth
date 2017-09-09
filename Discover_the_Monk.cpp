#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> vec;
    long int n,q;
    long long int x;
    long long int temp;
    cin>>n>>q;
    while(n--)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    while(q--)
    {
        cin>>x;
        if(std::binary_search(vec.begin(),vec.end(),x))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

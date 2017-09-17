#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    vector<string> vec;
    vector<string> ::iterator it;
    string temp;
    cin>>tc;
    while(tc--)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    for(it = vec.begin(); it != vec.end(); ++it)
    {
        string temp = *it;
        string fnd = string(temp.rbegin(), temp.rend());
        if(find(vec.begin(), vec.end(), fnd) != vec.end())
        {
            int mlen = (temp.length()/2);
            cout<<temp.length()<<" "<<temp.at(mlen)<<endl;
            vec.erase(remove(vec.begin(), vec.end(), temp), vec.end());
        }
    }
    return 0;
}

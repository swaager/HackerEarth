#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
vector<pair<long long,pair<int,int> > >v;
vector<long long> weights;
int m,n;
long long cost;
int arr[1000010],size[1000010];
 
void initialize()
{
	for(int i=0;i<=n;i++){
		arr[i]=i;
		size[i]=1;
	}
}
 
int root(int i)
{
	while(i!=arr[i]){
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}
 
void makeunion(int rx,int ry)
{
	if(size[rx]<=size[ry]){
		arr[rx]=arr[ry];
		size[ry]+=size[rx];
	}
	else{
		arr[ry]=arr[rx];
		size[rx]+=size[ry];
	}
}
 
void kruskal()
{
	initialize();
 
	for(int i=0;i<m;i++)
	{	
		int x=v[i].second.first,y=v[i].second.second;
		long long w=v[i].first;
		int rx=root(x),ry=root(y);
		if(rx!=ry){
			makeunion(rx,ry);
			cost+=w;
			weights.push_back(w);	
		}
	}
}
 
int main()
{
	int x,y,w;
	long long k;
	cin >> n >> m >> k;
	for(int i=0;i<m;i++)
	{
		cin >> x >> y >> w;
		v.push_back({w,{x,y}});
	}
	sort(v.begin(),v.end());
	kruskal();
	if(weights.size()!=n-1){ cout << -1 << endl; return 0;}
 
	sort(weights.begin(),weights.end());
	int ans=0;
//	cout << weights.size() << endl;
	while(cost>k && ans<n-1)
	{
		cost-=weights[n-2-ans];
		cost++;
		ans++;
	}
//	cout << cost << endl;
	if(cost>k)
		cout << -1 << endl;
	else
		cout << ans << endl;
 
	return 0;
}

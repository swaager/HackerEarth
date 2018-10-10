#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int st[400000];
int a[100100];
 
void build(int ind,int start,int end){
	if(start==end)
		st[ind]=a[end];
	else{
		int mid=(start+end)/2;
		build(2*ind+1,start,mid);
		build(2*ind+2,mid+1,end);
		st[ind]=min(st[2*ind+1],st[2*ind+2]);
	}
}
 
int query(int l,int r,int ind,int start,int end){
	if(l>end || r<start)
		return INT_MAX;
	if(l<=start && r>=end)
		return st[ind];
	
	int mid=(start+end)/2;
	int left=query(l,r,2*ind+1,start,mid);
	int right=query(l,r,2*ind+2,mid+1,end);
	return min(left,right);
}
 
void update(int x,int y, int ind, int start, int end){
	if(start==end){
		a[x]=y;
		st[ind]=y;
	}
	else{
		int mid=(start+end)/2;
		if(start<=x && x<=mid )
			update(x,y,2*ind+1,start,mid);
		else
			update(x,y,2*ind+2,mid+1,end);
		
		st[ind]=min(st[2*ind+1],st[2*ind+2]);
	}
}
 
int main()
{
	int n,q,x,y,i;
	char typ;
	cin >> n >> q;
	for(i=0;i<n;i++)
		cin >> a[i];
	build(0,0,n-1);
	while(q--)
	{
		cin >> typ >> x >> y;
		if(typ=='q')
			cout << query(x-1,y-1,0,0,n-1) << endl;
		else
			update(x-1,y,0,0,n-1);
	}
	return 0;
}

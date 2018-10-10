/*
This problem is based on minimum spanning tree. Here is the problem statement.

Problem Link - https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/practice-problems/algorithm/friendless-dr-sheldon-cooper-14/

Leonard has decided to quit living with Dr. Sheldon Cooper and has started to live with Penny. 
Yes, you read it right. (And you read it here for the first time!) He is fed up of Sheldon, after all.
Since, Sheldon no more has Leonard to drive him all around the city for various things,
he's feeling a lot uneasy so he decides to set up a network of drivers all around the city to drive him to various places.

But, not every driver wants to go every place in the city for various personal reasons, so Sheldon needs to
trust many different cab drivers. (Which is a very serious issue for him, by the way!) 
The problem occurs mainly when Sheldon needs to go to - for example, the Comic book store - and
 there's no cab driver who goes directly to that place. So, he has to take a cab till another place, and
  then take a cab from there - making him more scared!

Sheldon wants to limit his trust issues. Really. Once. And. For. All.

Let's say that you're given the schedule of all the cabs from the major points where
 he travels to and from - can you help Sheldon figure out the least number of cab drivers he needs
  to trust, in order to go to all the places he wants to?

Input Format:
The first line contains a number with the number of test cases. Every test case has the following input:

- Two integers a, b.	a - number of places he needs to go. b - number of cab drivers.
Output Format:
Print the minimum number of cab drivers he needs to have faith in to travel between places in the city.

Constraints:
1<=t<=100
2<=a<=1000 | 1<=b<=1000
m NOT equal to n | 1<=m | n<=b
The graph is connected.
*/
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int f=0;

void init(int arr[],int as[],int m){
	for(int i=0;i<m;i++){
		arr[i]=i;
		as[i]=1;
	}
}
int root(int arr[],int x){
	while(x!=arr[x]){
		x=arr[x];
	}
	return x;
}

void uni(int arr[],int x,int y,int s[]){
	
	int root_x=root(arr,x);
	int root_y = root(arr,y);
	if(s[root_x]>s[root_y]){
		arr[root_y] = arr[root_x];
		s[root_x]+=s[root_y];
	}else{
		arr[root_x]=arr[root_y];
		s[root_y]+=s[root_x];
	}
	
}


int kruskal(pair<long long int,long long > p[],int m,int arr[],int s[]){
	int cost = 0;
	for(int i=0;i<m;i++){
		int x= p[i].first;
		int y = p[i].second;
		
		if(root(arr,x)==root(arr,y)){
			
		}else{
			//cost+= w;
			uni(arr,x,y,s);
			f++;
		}
	}
	return cost;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	f=0;
	int n,m;
	cin>>n>>m;
	pair <long long int,long long int > p[m];
	int a[n],s[n];
	init(a,s,n);
	int x,y,w;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		p[i]=make_pair(x-1,y-1);
	}
	
	
	kruskal(p,m,a,s);
	cout<<f<<endl;
}
	
}


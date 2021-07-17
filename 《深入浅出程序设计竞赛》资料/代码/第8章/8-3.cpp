#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
struct node {
	int head;
	string name;
} a[maxn];
int n,m,x,y;
int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i].head>>a[i].name;
	}
	int now=0;
	for(int i=1; i<=m; i++) {
		cin>>x>>y;
		if(a[now].head^x==false) {
			now=(now+n-y)%n;
		} else if(a[now].head^x==true) {
			now=(now+y)%n;
		}
	}
	cout<<a[now].name<<endl;
	return 0;
}


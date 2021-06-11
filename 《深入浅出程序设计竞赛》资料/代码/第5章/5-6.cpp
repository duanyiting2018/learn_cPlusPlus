#include<bits/stdc++.h>
using namespace std;
#define MAXN 55
int main(){
	int n,m,a[MAXN][MAXN];
	memset(a,0,sizeof(a));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		for(int j=x1;j<=x2;j++){
			for(int k=y1;k<=y2;k++){
				a[j][k]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n;j++){
			cout<<a[i][j]<<(j==n?'\n':' ');
		}
	}
	return 0;
}

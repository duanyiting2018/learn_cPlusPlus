#include<bits/stdc++.h>
using namespace std;
int main(){
	int v[22][22][22],w,x,h,q,x1,x2,y1,y2,z1,z2,ans;
	cin>>w>>x>>h>>q;
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				v[i][j][k]=1;
			}
		}
	}
	while(q--){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				for(int k=z1;k<=z2;k++){
					v[i][j][k]=0;
				}
			}
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				ans+=v[i][j][k];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

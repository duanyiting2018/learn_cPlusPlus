#include<bits/stdc++.h>
using namespace std;
int s[25],n,m,maxsum;
void stat(int a[],int m){
	int maxs=0,mins=10,sum=0;
	for(int i=0;i<m;i++){
		maxs=max(a[i],maxs);
		mins=min(a[i],mins);
		sum+=a[i];
	}
	maxsum=max(maxsum,sum-maxs-mins);
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>s[j];
		}
		stat(s,m);
	}
	printf("%.2f",double(maxsum)/(m-2));
	return 0;
}

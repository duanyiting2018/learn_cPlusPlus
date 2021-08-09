#include<bits/stdc++.h>
using namespace std;
int const maxn=1010;
int a[maxn],ans[maxn],n,cnt=0,tmp=-1;
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]!=tmp) ans[cnt++]=a[i];
		tmp=a[i];
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++)cout<<ans[i]<<" ";
	return 0;
}

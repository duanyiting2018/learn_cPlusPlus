#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float a[100];
	cin>>n;
	a[0],a[1]=1.0;
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	scanf("%2f",a[n]);
	return 0;
}

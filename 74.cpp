#include<bits/stdc++.h>
using namespace std;
int main() {
	int ans,a[1000],b;
	srand(time(0));
	for(int i=1; i<=100; i++) {
		ans=rand()%100;
		a[i]=ans;
		cout<<i<<"\t"<<ans<<endl;
	}
	sort(a,a+101);
	for(int i=0;i<=101;i++){
		if(a[i]<=67){
			b++;
		}
	}
	cout<<b<<endl;
	return 0;
}

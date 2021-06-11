#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,ans=0;
	cin>>k;
	for(double sn=0;sn<=k;ans++,sn+=1.0/ans);
	cout<<ans;
	return 0;
}

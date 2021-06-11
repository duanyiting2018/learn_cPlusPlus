#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,tmp,minnum=100000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(tmp<minnum) minnum=tmp;
	}
	cout<<minnum<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,tmp,minnum;
	cin>>n>>tmp;
	minnum=tmp;
	for(int i=1;i<n;i++){
		cin>>tmp;
		minnum=minnum<tmp?minnum:tmp;
	}
	cout<<minnum<<endl;
	return 0;
}

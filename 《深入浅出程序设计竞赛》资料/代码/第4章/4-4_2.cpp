#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,days=1;
	cin>>a;
	for(;a>1;){
		days++;
		a/=2;
	}
	cout<<days;
	return 0;
}

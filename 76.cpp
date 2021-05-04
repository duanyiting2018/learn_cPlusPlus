#include<bits/stdc++.h>
using namespace std;
int main(){
	int num=0;
	double x,v=2.0,c=0.0;
	cin>>x;
	while(c+0.01<x){
		c+=v;
		v*=0.98;
		num++;
	}
	cout<<num<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	double p;
	int q,a,b,c,d;
	cin>>p;
	q=int(p*10);
	a=q/1000;
	b=q/100%10;
	c=q/10%10;
	d=q%10;
	cout<<d<<"."<<c<<b<<a<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	bool p1,p2;
	p1=x%2==0;
	p2=4<x&&x<=12;
	cout<<(p1&&p2)<<" "<<(p1||p2)<<" "<<(p1^p2)<<" "<<(!p1&&!p2);
	//cout<<(!p1&&!p2);µÈÓÚcout<<!(p1||p2);
	return 0;
}

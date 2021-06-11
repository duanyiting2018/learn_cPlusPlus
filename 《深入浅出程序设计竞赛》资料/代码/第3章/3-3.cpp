#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	bool p;
	cin>>x;
	p=(x%400==0)||(x%4==0)&&(x%100!=0);
	//p=!(x%400)||!(x%4)&&x%100;
	cout<<p<<endl; 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t1,t2,maxtime=8,maxday=0;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=1;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=2;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=3;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=4;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=5;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=6;
	cin>>t1>>t2;
	if(t1+t2>maxtime) maxtime=t1+t2,maxday=7;
	cout<<maxday; 
	return 0;
}

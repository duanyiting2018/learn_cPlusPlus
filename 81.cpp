#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	if(n==1)return 1;
	else return n+sum(n-1);
}
double pow(double a,double n){
	if(n==0) return 1;
	if(n==1) return a;
	return pow(a,n/2)*pow(a,n-n/2);
}
int main(){
	int n=20;
	double a=1.5;
	cout<<sum(n)<<endl;
	cout<<pow(a,3);
	return 0;
}

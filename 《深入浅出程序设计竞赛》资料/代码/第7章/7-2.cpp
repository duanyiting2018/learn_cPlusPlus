#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x){
	if(x==0||x==1) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(is_prime(a)){
			cout<<a<<" ";
		}
	}
	cout<<endl;
	return 0;
}

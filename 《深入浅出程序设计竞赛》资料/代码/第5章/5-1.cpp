#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[110],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i]){
				cnt++;
			}
		}
		cout<<cnt<<" ";
	}
	return 0;
}

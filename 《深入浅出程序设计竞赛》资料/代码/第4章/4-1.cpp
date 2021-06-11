#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,i;
	cin>>l;
	for(i=1;i<=l;i++){
		cout<<"Today, I ate "<<i<<" apple";
		if(i>=2) cout<<"s";
		cout<<"."<<endl;
	} 
	return 0;
}

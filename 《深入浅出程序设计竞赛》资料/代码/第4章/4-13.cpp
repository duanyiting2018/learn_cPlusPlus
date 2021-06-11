#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,load,ans=0;
	cin>>l;
	for(int i=2;;i++){
		int is_prime=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				is_prime=0;
				break;
			}
		}
		if(!is_prime) continue;
		if(i+load>l) break;
		cout<<i<<endl;
		ans++;
		load+=i;
	}
	cout<<ans;
	return 0;
}

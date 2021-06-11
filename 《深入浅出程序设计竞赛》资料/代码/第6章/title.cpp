#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("title.in","r",stdin);
	freopen("title.out","w",stdout);
	string s;
	int ans=0;
	while(cin>>s){
		ans+=s.length();
	}
	cout<<ans<<endl; 
	return 0;
}

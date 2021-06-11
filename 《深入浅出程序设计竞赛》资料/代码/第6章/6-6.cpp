#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,opt,l,r;
	string s,a;
	cin>>n;
	cin>>s;
	while(n--){
		cin>>opt;
		switch(opt){
			case 1:
				cin>>a;
				s.append(a);
				cout<<s<<endl;
				break;
			case 2:
				cin>>l>>r;
				s=s.substr(l,r);
				cout<<s<<endl;
				break;
			case 3:
				cin>>l>>a;
				s.insert(l,a);
				cout<<s<<endl;
				break;
			case 4:
				cin>>a;
				cout<<(int)s.find(a)<<endl;
		}
	}
	return 0;
}

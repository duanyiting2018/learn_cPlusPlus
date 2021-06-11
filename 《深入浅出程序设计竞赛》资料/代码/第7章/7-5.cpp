#include<bits/stdc++.h>
using namespace std;
string to_upper(string s){
	for(int i=0;i<s.length();i++){
		if('a'<=s[i]&&s[i]<='z'){
			s[i]-='a'-'A';
		}
	}
	return s;
}
int main(){
	string s1,s2;
	getline(cin,s1);
	s2=to_upper(s1);
	cout<<s1<<endl<<s2<<endl;
	return 0;
}

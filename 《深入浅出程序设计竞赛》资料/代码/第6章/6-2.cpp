#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char s[60];
	scanf("%d %s",&n,s);
	for(int i=0;s[i];i++){
		putchar((s[i]-'a'+n)%26+'a');
	}
	return 0;
}

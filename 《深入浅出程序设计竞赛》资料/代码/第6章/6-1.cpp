#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[110];
	scanf("%s",s);//也可以使用cin>>s;语句 
	for(int i=0;s[i]!='\0';i++){
		if('a'<=s[i]&&s[i]<='z'){
			s[i]-='a'-'A';
		}
	}
	printf("%s\n",s);//也可以使用cout<<s<<endl;语句 
	return 0;
}

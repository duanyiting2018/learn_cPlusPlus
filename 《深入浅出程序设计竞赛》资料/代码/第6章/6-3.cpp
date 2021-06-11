#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[110];
	int ans[26]={0};//ans[0]到ans[25]分别表示'a'到'z'出现的次数 
	int l,maxn=0,minn=10000,delta;//len,maxn,minn,maxn-minn
	scanf("%s",a);
	l=strlen(a);
	for(int i=0;i<l;i++){
		ans[a[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(ans[i]>maxn) maxn=ans[i];
		if(ans[i]!=0&&ans[i]<minn) minn=ans[i];
	}
	delta=maxn-minn;
	if(delta==0||delta==1){
		cout<<"No Answer"<<endl<<"0"<<endl;
		return 0; 
	}
	for(int h=2;h*h<=delta;h++){
		if(delta%h==0){
			cout<<"No Answer"<<endl<<"0"<<endl;
			return 0;
		}
	}
	cout<<"Lucky Word"<<endl<<maxn-minn<<endl;
	return 0;
}

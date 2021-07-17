#include<bits/stdc++.h>
using namespace std;
int f[2]={11,21};
int a[25*2500+10],n=0;
int main(){
	char tmp;
	while(1){
		cin>>tmp;
		if(tmp=='E') break;
		else if(tmp=='W') a[n++]=1;
		else if(tmp=='L') a[n++]=0;
	}
	for(int i=0;i<2;i++){
		int w=0,l=0;
		for(int j=0;j<n;j++){
			w+=a[j];
			l+=1-a[j];
			if(max(w,l)>=f[i]&&abs(w-l)>=2){
				cout<<w<<":"<<l<<endl;
				w=l=0;
			}
		}
		cout<<w<<":"<<l<<endl;
		cout<<endl;
	}
	return 0;
}


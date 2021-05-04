#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[12],money=0,save=0;
	for(int i=1;i<=12;i++){
		int n;
		cin>>n;
		a[i]=n;
	}
	for(int i=1;i<=12;i++){
		money+=300;
		if(money-a[i]<200&&money-a[i]>=100) money-=100,save+=100;
		if(money-a[i]>=200&&money-a[i]<300) money-=200,save+=200;
		if(money-a[i]>=300) money-=300,save+=300;
		if(money-a[i]<0){
			cout<<"-"<<i<<endl;
			return 0;
		}
		money-=a[i];
		//cout<<money<<endl;
		//cout<<"s"<<save<<endl;
	}
	money=money+save*1.2;
	cout<<money<<endl;
	return 0;
}

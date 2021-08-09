#include<bits/stdc++.h>
using namespace std;
int const maxn=310;
int n;
struct student{
	int id,chinese,total;
}a[maxn];
int cmp(student a,student b){
	return a.total>b.total;
	return a.chinese>b.chinese;
	return a.id>b.id;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int math,english;
		cin>>a[i].chinese>>math>>english;
		a[i].total=a[i].chinese+math+english;
		a[i].id=i+1;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<5;i++){
		cout<<a[i].id<<" "<<a[i].total<<endl;
	}
	return 0;
}

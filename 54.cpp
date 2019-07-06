#include<iostream>
using namespace std;
void show(int gs)//gs是形参,int是gs的数据类型 
{
	int i;
	for(i=1;i<=gs;i++)
		cout<<"*";
	cout<<endl;
}
int main()
{
	int n,a,b;
	cin>>n;
	for(a=1;a<=n;a++)//用循环,也可直接写 
		show(a);
		b=a*n;
		cout<<"*的个数:"<<b/2;
	return 0;
}

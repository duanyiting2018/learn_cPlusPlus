#include<iostream>
using namespace std;
int main()
{
	long long i,n;
	bool b;
	cout<<"请输入一个数：";
	cin>>n;
	b=true;
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			b=false;
			break;
		 }
	if(b)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

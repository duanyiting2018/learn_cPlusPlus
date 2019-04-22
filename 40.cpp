#include<iostream>
using namespace std;
int main()
{
	int i,j,a;
	cout<<":";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i*a;j++)
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
		cout<<endl;
	}
	return 0;
}

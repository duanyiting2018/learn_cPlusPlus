#include<iostream>
using namespace std;
int main()
{
	int i,j,a[6],n,b;
	cin>>b;
	for(i=1;i<6;i++)
		a[i]=i;
	i=1;
	cout<<i<<":  ";
	for(j=1;j<6;j++)
		cout<<a[j]<<" ";
	cout<<endl;
	for(i=2;i<=b;i++)
	{
		for(j=0;j<=4;j++)
			a[j]=a[j+1];
		a[5]=a[0];
		cout<<i<<": ";
		for(j=1;j<6;j++)
			cout<<" "<<a[j]<<" ";
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int num,n,m;
	cin>>num;
	m=0;
	n=num;
	for(;n>0;)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(m==num)
		cout<<"shws";
	else
		cout<<"bshws";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	long long n;
	int a,s=0;
	cout<<"n=";
	cin>>n;
	do{
		a=n%10;
		s+=a;
		n=n/10;
	}
	while(n!=0);
	cout<<"swzh:"<<s;
	return 0;
}

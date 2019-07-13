#include<iostream>
#include<iomanip>//setw()
using namespace std;
bool cs(int n)
{
	while(n%2==0)
		n/=2;
	while(n%3==0)
		n/=3;
	while(n%5==0)
		n/=5;
	return (n==1);
}
int main()
{
	int num=0,b;
	cin>>b;
	for(int i=1;i<=b;i++)
		if(cs(i))
		{
			cout<<setw(6)<<i;
			num++;
			if(!(num%10))cout<<endl;
		}
	cout<<endl;
	cout<<"gs:"<<num;
	return 0;
}

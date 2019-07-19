#include<iostream>
#include<iomanip>
using namespace std;
bool hw(int m)
{
	int temp=m,n=0;
	while(temp)
	{
		n=n*10+temp%10;
		temp/=10;
	}
	return (m==n);
}
int main()
{
	int num=0;
	for(int i=100;i<=10000;i++)
		if(hw(i))
		{
			cout<<setw(6)<<i;
			num++;
			if(!(num%10))
				cout<<endl;
		}
	cout<<"¸öÊý£º"<<num;
	return 0;
}

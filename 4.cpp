#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,s;
	a=18;
	b=860;
	s=a*b;
	cout<<setw(10)<<a<<endl;
	cout<<setw(6)<<'x'<<setw(4)<<b<<endl;
	cout<<setw(4)<<"------------"<<endl;
	cout<<setw(10)<<s<<endl;
	return 0;
}

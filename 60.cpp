#include<iostream>
#include<iomanip>//setw()
using namespace std;
void show(int n);//函数在main后面，要声明 
int main()
{
	int n=100;
	show(n);
	return 0;
}
void show(int n)
{
	if(n!=1)
		show(n-1);
	cout<<setw(6)<<n;
}

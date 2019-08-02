#include<iostream>
using namespace std;
int zy(int n)
{
	if(n==7)
		return 1;
	else
		return zy(n+1)+1;
}
int main()
{
	cout<<zy(1);
	return 0;
}

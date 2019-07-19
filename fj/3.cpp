#include<iostream>
using namespace std;
int main()
{
	int x;
	x=1;
	while(x==1)
	{
		cout<<x<<endl;
		x+=1;
	}
//------------------------------------------------------------
	do{
		cout<<x<<endl;
		x+=1;
	}
	while(x==1);
	return 0;
}

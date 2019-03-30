#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=40;i++)
	{if(i%7==0||i%10==7)
		cout<<"g ";
	else
		cout<<i<<" ";
	}
	return 0;
}

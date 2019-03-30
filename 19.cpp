#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{cout<<i<<" ";
	if(i%2==0)
		cout<<"dd ";
	if(i%3==0)
		cout<<"d2d2 ";
	if(i%2==0&&i%3==0)
		cout<<"dd d2d2 "<<endl;
	 }
	 return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,j,i,num;
	bool b[a];
	cout<<"请输入a（算a以内的素数）：";
	cin>>a;
	for(i=2;i<=a;i++)
		b[i]=true;
	b[0]=b[1]=false;
	i=1;
	do
	{
		i++;
		if(b[i])
		{
			for(j=2;j<=a/i;j++)
				b[i*j]=false;
		}
	}while(i<a);
	num=0;
	for(i=1;i<=a;i++)
	{
		if(b[i])
		{
			cout<<setw(10)<<i;
			num++;
			if(num%10==0)
				cout<<endl;
			
		}
	}
	cout<<endl;
	cout<<"a以内素数个数："<<num;
	return 0;
}

#include<iostream>
using namespace std;
int pdss(int x)
{
	if(x<=1)
		return 0;
	if(x==2)
		return 1;
	for(int i=2;i<=x-1;i++)
		if(x%i==0)
			return 0;
	return 1;
}
int main()
{
	int i,j,n;
	cout<<"n=";
	do
	{
		cin>>n;
	}while(n<4);
	for(i=4;i<=n;i+=2)
	{
		for(j=2;j<i;j++)
		{   
		    cout<<" i="<<i<<" j="<<j<<" i-j="<<i-j<<endl;
			if(pdss(j))
				if(pdss(i-j))
				{
					cout<<" "<<i<<"="<<j<<"+"<<i-j<<endl;
					break;
				}
		}
		//if(i==j)
			//cout<<i<<"ÑéÖ¤Ê§°Ü!";
	}
	return 0;
}

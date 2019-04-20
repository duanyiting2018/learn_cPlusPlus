#include<iostream>
using namespace std;
int main()
{
	int j;
	for(j=1;j<=5;j++)
	{
		for(int i=1;i<=j*j;i++)
		{
			for(int k=1;k<=i*i*j*j;k++)
			{
				cout<<i<<" "<<j<<" "<<k<<"**************************************"<<endl;
				if(i==j*2||k==i*2+j*2)
					{
						cout<<"Byebye!";
						break;
					}
			}
		}
	}
	return 0;
}

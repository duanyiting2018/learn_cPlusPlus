#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int x,y,s,a;
	int n,t,sum=0;
	srand(time(0));
	for(int i=1;i<=10;i++)
	{
		x=rand()%100+1;
		y=rand()%100+1;
		s=rand()%2;
		if(x<y&&s==1)
		{
			t=x;
			x=y;
			y=t;
		}
		switch(s)
		{
			case 0:
				a=x+y;
				cout<<x<<'+'<<y<<"=";
				break;
			case 1:
				a=x-y;
				cout<<x<<'-'<<y<<"=";
				break;
		}
		cin>>n;
		if(n==a)
		{
			sum+=10;
			cout<<"  ¶Ô£¡"<<endl;
		}
		else
			cout<<"  ´í£¡"<<endl;
	}
	cout<<"·ÖÊý£º"<<sum;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n=0;
	float n2,s,sum;
	bool flag;
	flag=true;
	sum=0.0;
	while(flag)
	{
		s=0.0;
		do
		{
			cin>>n;
			if(n==-1)
			{
				flag=false;
				break;
			}
			s+=n;
		}while(n!=0);
		cout<<"当前应付货款：";
		cout<<s<<endl;
		if(s!=0)
			n2++;
		sum+=s;
	}
	cout<<"营业数（今）："<<sum<<endl;
	cout<<"换购的人数（今）："<<n2;
	return 0;
}

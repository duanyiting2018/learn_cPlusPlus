#include<iostream>
using namespace std;
int main()
{
	long long s,n;
	int i;
	s=0;
	n=1;
	for(i=1;i<=64;i++)//Êý¾ÝÒç³ö´íÎó 
	{n*=2;
	s+=n;
	cout<<i<<" "<<n<<endl;
	}
	cout<<"zs:"<<s;
	return 0;
}

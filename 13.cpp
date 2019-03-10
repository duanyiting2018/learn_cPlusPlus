#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c&&b>c)
		cout<<a<<" "<<b<<" "<<c;
	if(a>b&&a>c&&c>b)
		cout<<a<<" "<<c<<" "<<b;
	if(b>a&&b>c&&a>c)
		cout<<b<<" "<<a<<" "<<c;
	if(b>a&&b>c&&c>a)
		cout<<b<<" "<<c<<" "<<a;
	if(c>a&&c>b&&a>b)
		cout<<c<<" "<<a<<" "<<b;
	if(c>a&&c>b&&b>a)
		cout<<c<<" "<<b<<" "<<a;
	return 0;
}

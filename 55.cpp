#include<iostream>
using namespace std;
int ans,a[5];
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
void funl(void)
{
	int i;
	for(i=0;i<5;i++)
		cin>>a[i];
	ans=a[0];
	for(i=1;i<=4;i++)//可以一条一条写 
		ans=max(ans,a[i]);
}
int main()
{
    funl();
	cout<<endl<<ans<<endl;
	return 0;
}

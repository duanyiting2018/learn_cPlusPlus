#include<iostream>
using namespace std;
int main()
{
	int a[6],n,i;
	for(i=1;i<=5;i++)
	{
		cout<<i<<"号成绩：";
		cin>>a[i];
	}
	cout<<"输学算成（1~5）：";
	cin>>n;
	if(n>=1&&n<=5)
		cout<<a[n];
	else
		cout<<"学号不存在。";
	return 0;
}

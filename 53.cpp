#include<iostream>
#include<cstdlib>//调用system()函数
#include<string>
using namespace std;
int main()
{
	int i,a[4],ans;
	string t[4];
	t[0]="1,2,3,4,5,6,7";
	t[1]="1,3,5,7";
	t[2]="2,3,6,7";
	t[3]="4,5,6,7";
	cout<<"读心术"<<endl;
	cout<<"从下面7个数中选1个记在心里："<<endl;
	cout<<t[0]<<endl;
	system("pause");//暂停
	for(i=1;i<=3;i++)
	{
		system("cls");//清屏1
		cout<<i<<"问：下面的数中有吗?0没有,1有"<<endl;
		cout<<t[i]<<endl;
		do
		{
			cin>>a[i];
		}while(a[i]<0||a[i]>1);
	}
	ans=4*a[3]+2*a[2]+a[1];
	system("cls");//1
	cout<<"你想的数是：";
	cout<<ans<<endl;
	return 0;
}

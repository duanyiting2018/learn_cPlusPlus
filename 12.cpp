#include<iostream>
using namespace std;
int main()
{
	bool bools;
	int year;
	cout<<"哈哈哈哈哈哈哈哈哈哈！"<<endl<<"你被陌生人打昏了，关在密室里"<<endl<<"你要写闰年年份才能逃出去：";
	cin>>year;
	if((year%4==0&&year%100!=0)||year%400==0)
		bools=true;
	else
		bools=false;
	if(bools)
		cout<<"恭喜你成功！";
	else
		cout<<"很抱歉，你已失败...";
	return 0;
}

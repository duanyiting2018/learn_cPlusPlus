#include<iostream>
#include<iomanip>//用setw 
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=40;i++)//控制行数 
	{
		cout<<setw(41-i)<<' ';//指定*的位置 
		for(j=1;j<=i*2-1;j++)//控制每行个数 
			cout<<'*';//输出 
		cout<<endl;//换行 
	}
	return 0;
}

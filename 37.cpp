#include<iostream>
using namespace std;
int main()
{
	int sj,ss,hlls,nk,gle;
	bool flag;
	sj=0;
	ss=1;
	hlls=nk=gle=0;
	do{
		flag=0;
		sj++;
		if(hlls<9)
		{
			hlls++;
			flag=1;
		}
		if(nk<9&&sj%2==0)
		{
			nk++;
			flag=1;
		}
		if(gle<9&&sj%4==0)
		{
			gle++;
			flag=1;
		}
		if(flag)ss++;
	}
	while(hlls+nk+gle<9*3);
	cout<<ss;
	return 0;
}

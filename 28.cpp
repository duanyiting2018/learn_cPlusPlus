#include<iostream>
using namespace std;
int main()
{
//A:我不是小偷
//B:C是小偷
//C:D是小偷
//D:我不是小偷
//(3人对，1人错，求小偷)
	int i;
	char xt;
	for(i=1;i<=4;i++)
		if((i!=1)+(i==3)+(i==4)+(i!=4)==3)
		{
			xt=64+i;
			cout<<"xiaotou:"<<xt;
			break;
		}
	return 0;
}

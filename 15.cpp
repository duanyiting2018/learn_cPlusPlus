#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a,n;//b;
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	//重复
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	
	cout<<"抽奖：输1~5任意数：";
	cin>>n;
	srand(time(0));
	a=rand()%5+1;
	if(n==a)	cout<<"中奖了！给你10元。"<<endl;
	else	cout<<"没中奖，给我20元。"<<endl;
	cout<<"号码是："<<a<<endl;
	//b=RAND_MAX;
	//cout<<b;
	return 0;
}

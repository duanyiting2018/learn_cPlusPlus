#include<iostream>
using namespace std;
int main()
{
	int iq;
	cout<<"IQ:";
	cin>>iq;
	if(iq>=160)cout<<"天才！";
	if(iq<160&&iq>=135)cout<<"市民。";
	if(iq<135)cout<<"笨蛋！";
	return 0;
}

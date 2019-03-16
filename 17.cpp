#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ÊäÈë²Ë±àºÅ£º";
	cin>>n;
	switch(n)
	{
		case 1:cout<<"Å£";break;
		case 2:cout<<"Ñò";break;
		case 3:cout<<"Öí";break;
		case 4:cout<<"Èâ";break;
		case 5:cout<<"¹û";break;
		case 6:cout<<"Ö­";break;
		case 7:cout<<"È«";break;
		case 8:cout<<"ÄÌ";break;
		case 9:cout<<"¶¹";break;
		case 10:cout<<"¶³";break;
		case 11:cout<<"Ãæ";break;
		case 12:cout<<"ÅÅ";break;
		case 13:cout<<"¹Ç";break;
		default: cout<<"ÊäÈë´íÎó¡£";break;
	}
	return 0;
}

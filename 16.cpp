#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string score;
	cout<<"ÊäÈë¿¼ÊÔ·ÖÊý£º";
	cin>>n;
	switch(n/10)
	{
		case 10:score="A";break;
		case 9:score="A-";break;
		case 8:score="B";break;
		case 7:score="C";break;
		case 6:score="D";break;
		case 5:score="D-";break;
		case 4:score="D--";break;
		case 3:score="D---";break;
		case 2:score="D----";break;
		case 1:score="D-----";break;
		case 0:score="D------";break;
		default:score="DDDDDD------";break;
	}
	cout<<score;
	return 0;
}

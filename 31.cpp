#include<iostream>
using namespace std;
int main()
{
	int i,t;
	t=i=0;
	while(1)
	{
		t++;
		i+=3;
		if(i>=17)
			break;
		t++;
		i--;
	}
	cout<<"Òª"<<t<<"·ÖÖÓ";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int g,s,b,i;
	for(i=10;i<1000;i++)
	{
		b=i/100;
		g=i%10;
		s=(i/10)%10;//!!!
		if(b*b*b+s*s*s+g*g*g==i)
			cout<<i<<"	";//"	"=setw(4)
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int xm,xl,xs,xh;
	bool mc[4];
	cout<<"小明 	小丽 	小帅 	小华"<<endl;
	for(xm=1;xm<=4;xm++)
		for(xl=1;xl<=4;xl++)
			for(xs=1;xs<=4;xs++)
			{
				xh=10-xm-xl-xs;
				cout<<xm<<" 	"<<xl<<" 	"<<xs<<" 	"<<xh<<endl;
				if(xm*xl*xs*xh)
				{
					mc[0]=((xm==1)+(xl==4)+(xs==3)+(xh==2)==2);
					mc[1]=((xl==1)+(xm==4)+(xs==2)+(xh==3)==2);
					mc[2]=((xl==4)+(xm==3)==1);
					mc[3]=((xm==1)+(xh==4)+(xl==3)+(xs==2)==2);
					if(mc[0]&&mc[1]&&mc[2]&&mc[3])
					{
						cout<<"小明：第"<<xm<<endl;
						cout<<"小丽：第"<<xl<<endl;
						cout<<"小帅：第"<<xs<<endl;
						cout<<"小华：第"<<xh<<endl;
						break;
					}
				}
			}
		return 0;
}

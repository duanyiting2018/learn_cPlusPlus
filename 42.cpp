#include<iostream>
using namespace std;
int main()
{
	int gj,mj,xj;
	cout<<"    公鸡    母鸡    小鸡"<<endl;
	for(gj=1;gj<=33;gj++)
		for(mj=1;mj<=50;mj++)
			for(xj=1;xj<=100;xj++)
				if((gj+mj+xj==100)&&(gj*3+mj*2+xj/3.0==100))
					cout<<"    "<<gj<<"       "<<mj<<"       "<<xj<<endl;
//一共运行了33乘50乘100=165000次if判断
//--------------------------------------------------------------------------
//一共运行了33乘55=1650次if判断
    cout<<"    公鸡    母鸡    小鸡"<<endl;
	for(gj=1;gj<=33;gj++)
		for(mj=1;mj<=50;mj++)
		{
			xj=100-gj-mj;
			if((gj+mj+xj==100)&&(gj*3+mj*2+xj/3.0==100))
				cout<<"    "<<gj<<"       "<<mj<<"       "<<xj<<endl;
	    }
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define PI 3.141593
int main(){
	int r1=4,r2=10;
	double V,l;
	V=4.0/3*PI*(r1*r1*r1+r2*r2*r2);
	l=pow(V,1.0/3);
	cout<<(int)l<<endl;
	return 0;
}

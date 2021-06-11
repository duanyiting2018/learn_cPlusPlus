#include<bits/stdc++.h>
using namespace std;
double sq(double x){
	return x*x;
}
double dist(double x1,double y1,double x2,double y2){
	return sqrt(sq(x1-x2)+sq(y1-y2));
}
double answer(){
	double x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double ans;
	ans=dist(x1,y1,x2,y2);
	ans+=dist(x1,y1,x3,y3);
	ans+=dist(x2,y2,x3,y3);
	printf("%.2f",ans);
	
}
int main(){
	answer();
	return 0;
}

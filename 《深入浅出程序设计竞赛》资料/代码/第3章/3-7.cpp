#include<bits/stdc++.h>
using namespace std;
int main(){
	double m,h,BMI;
	cin>>m>>h;
	BMI=m/h/h;
	if(BMI<18.5){
		cout<<"Underweight";
	}
	else if(BMI<24){
		cout<<"Normal";
	}
	else{
		cout<<BMI<<endl;
		cout<<"Overweight"<<endl;
	}
	return 0;
}

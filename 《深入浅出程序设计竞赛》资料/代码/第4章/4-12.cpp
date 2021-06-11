#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double s=0;
	cin>>n;
	/*错误的程序,注意浮点数精度误差  
	for(double i=0;i!=n;i+=0.1){
		s+=i;
		cout<<i<<endl;
	}
	*/
	for(double i=0;i+0.01<n;i+=0.1){//i+1e-3<n也可以  
		s+=i;
		//cout<<i<<endl;
	}
	cout<<s;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	char opt;
	for(int i=1;i<=10;i++){
		cin>>opt;
		switch(opt){
			case 'G':cout<<"Hello,SB!"<<endl;break;
			case 'N':cout<<"I'm SBxiaoluo."<<endl;break;
			case 'S':cout<<"lalala~"<<endl;break;
			case 'B': case 'Q':
				cout<<"Bye bye,SB!"<<endl;
				break;
			default:cout<<"Sorry,I don't know,SB."<<endl;
		}
	}
	return 0;
}

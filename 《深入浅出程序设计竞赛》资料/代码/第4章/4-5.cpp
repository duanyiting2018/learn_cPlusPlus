#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans,guess;
	srand(time(0));
	ans=rand()%1000+1;
	do{
		cin>>guess;
		if(guess<ans){
			cout<<"too small!"<<endl;
		}
		if(guess>ans){
			cout<<"too big!"<<endl;
		}
		else if(guess==ans){
			cout<<"you are right!"<<endl;
			break;
		}
	}while(true);
	return 0;
}

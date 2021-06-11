#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v;
	scanf("%d%d",&s,&v);
	int walk=ceil(1.0*s/v)+10;
	int from_zero=60*(24+8)-walk;
	int hh=(from_zero/60)%24,mm=from_zero%60;
	printf("%02d:%02d\n",hh,mm);
	return 0;
}

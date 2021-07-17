#include<bits/stdc++.h>
using namespace std;
int a[1050][1050],n;
void cal(int x,int y,int n){
	if(n==0) a[x][y]=1;
	else {
		cal(x+(1<<n-1),y,n-1);//ÓÒÉÏ½Ç¾ØÕó 
		cal(x,y+(1<<n-1),n-1);//×óÏÂ½Ç¾ØÕó 
		cal(x+(1<<n-1),y+(1<<n-1),n-1);//ÓÒÏÂ½Ç¾ØÕó  
	}
}
int main(){
	int n;
	//cin>>n;
	scanf("%d",&n);
	cal(0,0,n);
	for(int i=0;i < 1<<n;i++){
		for(int j=0;j < 1<<n;j++){
			printf("%d%c",a[i][j],j==(1<<n)-1?"\n":" ");
		}
	}
	return 0;
}


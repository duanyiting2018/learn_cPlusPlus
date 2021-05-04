#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,c;
    cin>>n>>k;
    if(n>k){
    	a=n;
	}
	else{
		a=k;
	}
    for(int i=1;i<=a;i++){
        if(n%i==0&&k%i==0){
            c=i;
            if(n==1||k==1){
            	c=a;
			}
        }
    }
    cout<<c;
    return 0; 
}

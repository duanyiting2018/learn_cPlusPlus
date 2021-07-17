#include<bits/stdc++.h>
using namespace std;
#define maxn 5010
#define leng(a) a.length()
int a[maxn],b[maxn],c[maxn];
int main(){
	string A,B;
	cin>>A>>B;
	int lena=leng(A),lenb=leng(B);
	for(int i=lena-1;i>=0;i--){
		a[lena-i]=A[i]-'0';
	}
	for(int i=lenb-1;i>=0;i--){
		b[lenb-i]=B[i]-'0';
	}
	for(int i=1;i<=lena;i++){
		for(int j=1;j<=lenb;j++){
			c[i+j-1]+=a[i]*b[j];
		}
	}
	int len=lena+lenb;
	for(int i=1;i<=len;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	for(;!c[len];){
		len--;
	}
	for(int i=max(1,len);i>=1;i--){
		cout<<c[i];
	}
	return 0;
}


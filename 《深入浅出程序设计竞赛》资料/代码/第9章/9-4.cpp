#include<bits/stdc++.h>
using namespace std;
int ans=0,k;
void findkth(int a[],int l,int r){
	if(l==r){
		ans=a[l];//区间长度为1时记录答案  
		return;
	}
	int i=l,j=r,flag=a[(1+r)/2],tmp;
	do{
		while(a[i]<flag) i++;//从左边找出比哨兵大的数 
		while(a[j]>flag) j--;//从右边找出比哨兵小的数 
		if(i<=j){
			tmp=a[i];a[i]=a[j];a[j]=tmp;
			i++;j--;
		}
	}while(i<=j);
	if(k<=j) findkth(a,l,j);//第k小的数字在左区间 
	else if(i<=k) findkth(a,i,r);//第k小的数字在右区间 
	else findkth(a,j+1,i-1);//既不在左区间，也不在右区间  
}
int main(){
	int a[50000000],i;
	for(i:a){
		cin>>a[i];
	}
	findkth(a,0,i);
	return 0;
}

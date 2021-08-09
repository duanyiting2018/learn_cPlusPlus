#include<bits/stdc++.h>
using namespace std;
void qsort(int a[],int l,int r){
	int i=l,j=r,flag=a[(1+r)/2],tmp;//flag为哨兵 
	do{
		while(a[i]<flag) i++;//从左边找出比哨兵大的数 
		while(a[j]>flag) j--;//从右边找出比哨兵小的数 
		if(i<=j){
			tmp=a[i];a[i]=a[j];a[j]=tmp;
			i++;j--;
		}
	}while(i<=j);
	if(l<j) qsort(a,l,j);
	if(i<r) qsort(a,i,r);
}
int main(){
	return 0;
}

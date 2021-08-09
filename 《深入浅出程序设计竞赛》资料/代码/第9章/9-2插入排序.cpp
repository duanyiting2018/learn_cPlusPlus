for(int i=1;i<n;i++){
	int now=a[i],j;
	for(int j=i-1;j>=0;j--){
		if(a[j]>now){
			a[j+1]=a[j];
		}
		else break;
	}
	a[j+1]=now;
}

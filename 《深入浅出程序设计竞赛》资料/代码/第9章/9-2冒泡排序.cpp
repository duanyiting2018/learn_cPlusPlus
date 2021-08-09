for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			int p;
			p=a[j];
			a[j]=a[j+1];
			a[j+1]=p;
		}
	}
}

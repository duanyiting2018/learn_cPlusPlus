#include<stdio.h>
int main()
{
	int *p,a;
	a=1;
	p=&a;
	printf("%d %d",*p,a);
	return 0;
}

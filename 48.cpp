#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char str[1000];
	int i,num1,num2;
	num1=num2=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		num1++;
		if(str[i]=='.')
			num2++;
	}
	puts(str);
	cout<<"zfgs:"<<num1<<endl;
	cout<<"\".\"dgs:"<<num2;
	return 0;
}

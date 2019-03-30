#include<iostream>
using namespace std;
int main()
{
	char a;
	int b,c;
	b='A'-'a';
	
	for(a='a';a<='z';a++)
		cout<<a<<(char)(int)(a+b)<<" ";
	return 0;
}

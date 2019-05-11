#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s;
	string s1,s2;
	getline(cin,s1);
	int i;
	s2="";
	for(i=0;i<s1.size();i++)//s1.size()返回str1中字符个数
	{
		s=s1[i];
		if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
		{
			s++;
			if((s>'Z'&&s<'a')||s>'z')
				s-=26;
		}
		s2+=s;
	}
	cout<<s2;
	return 0;
}

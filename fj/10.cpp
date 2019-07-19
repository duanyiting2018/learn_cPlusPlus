#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string str;
	int i,ans;
	i=0;
	ans=0;
	getline(cin,str);
	while(i<str.size())
	{
		if(i>0)
			if(str[i]==32&&str[i-1]!=32)
				ans++;
		i++;
	}
	cout<<ans;
	return 0;
}

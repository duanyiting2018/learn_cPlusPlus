#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int PSW=12345678;
	int psw;
	string user;
	const string USER="duanyiting";
	cout<<"»¶Ó­À´µ½ÒàÍ¥Ìâ¿â£¬ÇëÊäÈëÓÃ»§Ãû£º";
	cin>>user;
	cout<<"ÇëÊäÈëÃÜÂë£º";
	cin>>psw;
	if(user==USER)
		if(psw==PSW)
		cout<<"»¶Ó­Äã£¡Ð¡ÅóÓÑ£¬Çë°´enter¼ü¼ÌÐø¡£";
		else
		cout<<"ÃÜÂëÊä´íÁË£¬ÇëÖØÊä£¡";
	else
	cout<<"ÓÃ»§Êä´íÁË£¬ÇëÖØÊä£¡";
	return 0;
}

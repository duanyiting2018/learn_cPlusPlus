#include <cstdio>  
#include <iostream>  
#include <cstdlib>  
#include <cmath>  
 
using namespace std;  
 
int main(void){  
	char s[13]={'\0'};
	int ans = 0;
	char end;
	int i,j;
	scanf("%s",s);
	end = s[12];
	ans = s[0]-'0';
	for (i=2 ; i<=4 ; i++)
	{
		ans += (s[i]-'0')*i;
	}
	for (j=6 ; j<=10 ; j++)
	{
		ans += (s[j]-'0')*(j-1);
	}
	ans = ans%11;
	if (ans == 10)
	{
		if (end == 'X')
		{
			printf("Right");
		}else{
			for (i=0 ; i<=11 ; i++)
			{
				printf("%c",s[i]);
			}
			printf("X");
		}
		return 0;
	}
	end -= '0';
	if (ans == end)
	{
		printf("Right");
	}else{
		for (i=0 ; i<=11 ; i++)
		{
			printf("%c",s[i]);
		}
		printf("%d",ans);
	}
	return 0;
}  


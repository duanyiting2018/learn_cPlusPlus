#include<bits/stdc++.h>
using namespace std;
int main(){
	string word,s;
	getline(cin,word);
	getline(cin,s);
	for(int i=0;i<word.length();i++){
		if('A'<=word[i]&&word[i]<='Z'){
			word[i]+='a'-'A';
		}
	}
	for(int i=0;i<s.length();i++){
		if('A'<=s[i]&&s[i]<='Z'){
			s[i]+='a'-'A';
		}
	}
	word=' '+word+' ';//将单词的前后都加上空格，防止多算 
	s=' '+s+' ';
	if(s.find(word)==-1){
		cout<<-1<<endl;
	} else {
		int firstpos=s.find(word);
		int nextpos=s.find(word),cnt=0;
		while(nextpos!=-1){
			cnt++;
			nextpos=s.find(word,nextpos+1);/*每次从上一次出现次数的后面
			查询这个单词下一次出现的位置*/
		}
		cout<<cnt<<" "<<firstpos<<endl;
	}
	return 0;
}

//题目描述
//现有 N(N<=1000)名同学，每名同学需要设计一个结构体记录以下信息：学号（不超过 100000 的正整数）、学业成绩和素质拓展成绩（分别是 0 到 100 的整数）、综合分数（实数）。
//每行读入同学的姓名、学业成绩和素质拓展成绩，并且计算综合分数（分别按照 70% 和 30% 权重累加），存入结构体中。还需要在结构体中定义一个成员函数，返回该结构体对象的学业成绩和素质拓展成绩的总分。
//然后需要设计一个函数，其参数是一个学生结构体对象，判断该学生是否优秀。优秀的定义是学业和素质拓展成绩总分大于 140 分，且综合分数不小于 80 分。
//输入格式
//第一行一个整数 N。
//接下来 N 行，每行 3 个整数，依次代表学号、学业成绩和素质拓展成绩。
//输出格式
//N 行，如果第 i 名学生是优秀的，输出 Excellent，否则输出 Not excellent。
#include<bits/stdc++.h>
using namespace std;
struct student {
	int no;
	int score,extend_score;
	//double all_score;
//	student() {
//	}
//	student(int no,int score,int extend_score) {
//		no=no;
//		score=score;
//		extend_score=extend_score;
//		all_score=score*0.7+extend_score*0.3;
//	}
	double all_score() {
		return score*0.7+extend_score*0.3;
	}
	int sum() {
		return score+extend_score;
	}
};
int main() {
	int id,score2,extend,n;
	student a[1010];
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>id>>score2>>extend;
		//student b={id,score2,extend};
		student b ;
		b.no=id;
		b.score=score2;
		b.extend_score=extend;
		a[i]=b;
		//student a[i](id,score2,extend);
	}

//	for(int i=1; i<=n; i++) {
//		//cin>>id>>score2>>extend;
//
//		cout<<a[i].no<<" "<<a[i].score <<" "<<a[i].extend_score<<endl;
//		//student a[i](id,score2,extend);
//	}

	for(int i=1; i<=n; i++) {
		if(a[i].sum()>140&&a[i].all_score()>=80) {
			cout<<"Excellent"<<endl;
		} else {
			cout<<"Not excellent"<<endl;
		}
	}
	return 0;
}


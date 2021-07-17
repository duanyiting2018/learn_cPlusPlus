#include<bits/stdc++.h>
using namespace std;
struct student {
	string name;
	double chinese,math,english;
} a;
double total_score(student &stu) {
	return stu.chinese+stu.math+stu.english;
}
student create_student(string name,double chinese,double math,double english) {
	a.name=name;
	a.chinese=chinese;
	a.math=math;
	a.english=english;
	return a;
}
int main() {
	student a=create_student("duanyiting",91.3,97,96.4);
	student b=create_student("xiaoming",82.1,60,91.2);
	student c=create_student("huahua",93.7,95.6,88.9);
	double biggest,a2,b2,c2;
	a2=total_score(a);
	b2=total_score(b);
	c2=total_score(c);
	biggest=a2>=b2&&a2>=c2?a2:(b2>=c2?b2:c2);
	if(biggest==a2) {
		cout<<"name: "<<a.name<<endl<<"chinese_score: "<<a.chinese<<endl<<"math_score: "<<
		    a.math<<endl<<"english_score: "<<a.english<<endl<<"total_score: "<<a2<<endl;
		return 0;
	} else if(biggest==b2) {
		cout<<"name: "<<b.name<<endl<<"chinese_score: "<<b.chinese<<endl<<"math_score: "<<
		    b.math<<endl<<"english_score: "<<b.english<<endl<<"total_score: "<<b2<<endl;
		return 0;
	} else if(biggest==c2) {
		cout<<"name: "<<c.name<<endl<<"chinese_score: "<<c.chinese<<endl<<"math_score: "<<
		    c.math<<endl<<"english_score: "<<c.english<<endl<<"total_score: "<<c2<<endl;
		return 0;
	}
}


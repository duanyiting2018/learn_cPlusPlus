#include<iostream>
using namespace std;
class art
{
	private:	//声明私人数据和成员函数 
		string name;//只能在本类成员函数用  
		int age;
	public:    //声明公用数据和成员函数，类外也可调用 
		void set(string sn,int sa)
		{
			name=sn;
			age=sa;
		}
		void display()
		{
			cout<<"姓名："<<name<<endl;
			cout<<"年龄："<<age<<endl;
			cout<<"----------------"<<endl;
		}
};
int main()
{
	art s1,s2,s3;//定义了art类的三个对象 
	s1.set("DANNY",12);
	s1.display();
	s2.set("KITE",15);
	s2.display();
	s3.set("MANY",18);
	s3.display();
	return 0;
}

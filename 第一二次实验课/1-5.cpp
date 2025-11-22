#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float h = 0;//定义华氏温度
	float s = 0;//定义摄氏温度
	cout << "请输入一个华氏温度：" << endl;
	cin >> h;
	s = (h - 32) / 1.8;
	cout << "这个华氏温度对应的摄氏温度为: " << setprecision(4) << s;
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	float r = 0, h = 0;
	const float lve = 3.14;
	cout << "请依次输入圆锥底半径和锥高:";
	cin >> r >> h;
	float v = 0;
	v = lve * r * r * h/3;
	cout << "圆锥的体积为 " << v << endl;
	return 0;


}